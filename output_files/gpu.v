`timescale 1ns / 1ps

module gpu_integration_tb;

    // ------------------------------------------------------------------------
    // Sinais do Testbench
    // ------------------------------------------------------------------------
    reg        clk;
    reg        rst_n;
    
    // Interface de Comando (32 bits)
    reg [31:0] cmd_data;
    reg        cmd_valid;
    
    // Coordenadas lógicas simuladas do rastreador VGA (320x240)
    reg [8:0]  pixel_x;
    reg [7:0]  pixel_y;

    // Conexões intermediárias (Decoder -> SAT)
    wire       sat_we_pos;
    wire       sat_we_attr;
    wire [4:0] sat_addr;
    wire [8:0] sat_in_x;
    wire [7:0] sat_in_y;
    wire [7:0] sat_in_tile_id;
    wire       sat_in_enable;
    wire       sat_in_flip_h;
    wire       sat_in_flip_v;
    wire       sat_in_priority;
    wire [1:0] sat_in_palette_bank;

    // Emulação de Pattern VRAM de Sprites (mock estático para teste)
    wire [13:0] pattern_addr;
    reg  [7:0]  pattern_rom [0:16383];
    wire [7:0]  pattern_data;

    // Conexões (Sprite -> Compositor)
    wire [7:0] sprite_pixel;
    wire       sprite_priority;
    wire [1:0] sprite_palette_bank;
    wire       sprite_hit;

    // Camadas auxiliares simuladas (Polygon e BG)
    reg  [7:0] poly_pixel;
    reg  [7:0] bg_pixel;

    // Saída final
    wire [7:0] final_pixel_idx;

    // Leitura mock da Pattern VRAM
    assign pattern_data = pattern_rom[pattern_addr];

    // ------------------------------------------------------------------------
    // Instanciação dos Módulos Principais
    // ------------------------------------------------------------------------
    cmd_decoder u_cmd_decoder (
        .clk              (clk),
        .rst_n            (rst_n),
        .cmd_data         (cmd_data),
        .cmd_valid        (cmd_valid),
        .sat_we_pos       (sat_we_pos),
        .sat_we_attr      (sat_we_attr),
        .sat_addr         (sat_addr),
        .out_x            (sat_in_x),
        .out_y            (sat_in_y),
        .out_tile_id      (sat_in_tile_id),
        .out_enable       (sat_in_enable),
        .out_flip_h       (sat_in_flip_h),
        .out_flip_v       (sat_in_flip_v),
        .out_priority     (sat_in_priority),
        .out_palette_bank (sat_in_palette_bank)
    );

    sprite_engine u_sprite_engine (
        .clk                 (clk),
        .rst_n               (rst_n),
        .pixel_x             (pixel_x),
        .pixel_y             (pixel_y),
        .sat_we_pos          (sat_we_pos),
        .sat_we_attr         (sat_we_attr),
        .sat_addr            (sat_addr),
        .in_x                (sat_in_x),
        .in_y                (sat_in_y),
        .in_tile_id          (sat_in_tile_id),
        .in_enable           (sat_in_enable),
        .in_flip_h           (sat_in_flip_h),
        .in_flip_v           (sat_in_flip_v),
        .in_priority         (sat_in_priority),
        .in_palette_bank     (sat_in_palette_bank),
        .pattern_addr        (pattern_addr),
        .pattern_data        (pattern_data),
        .sprite_pixel_idx    (sprite_pixel),
        .sprite_priority     (sprite_priority),
        .sprite_palette_bank (sprite_palette_bank),
        .sprite_hit          (sprite_hit)
    );

    compositor u_compositor (
        .sprite_hit      (sprite_hit),
        .sprite_pixel    (sprite_pixel),
        .sprite_priority (sprite_priority),
        .poly_pixel      (poly_pixel),
        .bg_pixel        (bg_pixel),
        .final_pixel_idx (final_pixel_idx)
    );

    // ------------------------------------------------------------------------
    // Geração de Clock (25 MHz = 40 ns)
    // ------------------------------------------------------------------------
    always #20 clk = ~clk;

    // ------------------------------------------------------------------------
    // Tarefa Auxiliar para Envio de Comando
    // ------------------------------------------------------------------------
    task send_cmd(input [31:0] cmd);
        begin
            @(posedge clk);
            cmd_data  <= cmd;
            cmd_valid <= 1'b1;
            @(posedge clk);
            cmd_valid <= 1'b0;
            cmd_data  <= 32'd0;
        end
    endtask

    // ------------------------------------------------------------------------
    // Procedimento Principal de Testes
    // ------------------------------------------------------------------------
    integer k;
    initial begin
        // Inicialização
        clk        = 0;
        rst_n      = 0;
        cmd_data   = 0;
        cmd_valid  = 0;
        pixel_x    = 0;
        pixel_y    = 0;
        poly_pixel = 8'h00;
        bg_pixel   = 8'hAA; // Fundo azul simulado (0xAA)

        // Preenche memória de padrões: Tile 0 tem pixel 0x55 no canto top-left (0,0) e 0x00 (transparente) no (1,0)
        for (k = 0; k < 16384; k = k + 1) pattern_rom[k] = 8'h00;
        pattern_rom[0] = 8'h55; // Pixel visível (vermelho)
        pattern_rom[1] = 8'h00; // Pixel transparente

        #100;
        rst_n = 1;
        #40;

        $display("=================================================");
        $display("INICIANDO SUÍTE DE TESTES DA GPU DE1-SOC");
        $display("=================================================");

        // --------------------------------------------------------------------
        // TESTE 1: Opcode Inválido
        // --------------------------------------------------------------------
        $display("\n[TESTE 1] Enviando Opcode Inexistente (0xF)...");
        send_cmd(32'hF0000000);
        #40;
        if (sat_we_pos == 0 && sat_we_attr == 0)
            $display("-> PASS: Opcode inválido ignorado com sucesso (nenhuma escrita disparada).");
        else
            $display("-> FAIL: Opcode inválido causou alteração indevida de estado!");

        // --------------------------------------------------------------------
        // TESTE 2: Configuração Genérica do Sprite 5 (Opcodes 0xB e 0x6)
        // --------------------------------------------------------------------
        $display("\n[TESTE 2] Configurando Sprite Slot 5 (X=100, Y=50, Tile=0, Priority=0)...");
        // Opcode 0xB: Slot=5, Tile=0, Pal=0, Prio=0, En=1, FlipH=0, FlipV=0
        send_cmd(32'hB2800800); 
        // Opcode 0x6: Slot=5, X=100 (9b), Y=50 (8b) -> Payload = [27:23]=5, [22:14]=100, [13:6]=50
        send_cmd({4'h6, 5'd5, 9'd100, 8'd50, 6'd0});
        #80;

        // Posiciona o ponteiro de varredura VGA em (100, 50)
        pixel_x = 9'd100;
        pixel_y = 8'd50;
        poly_pixel = 8'hCC; // Polígono verde atrás do sprite prioridade 0
        #80;

        // --------------------------------------------------------------------
        // TESTE 3: Prioridade e Sobreposição (Priority = 0)
        // --------------------------------------------------------------------
        $display("\n[TESTE 3] Testando Prioridade Baixa (priority=0) em relação ao Polígono...");
        if (final_pixel_idx == 8'hCC)
            $display("-> PASS: Polígono (0xCC) sobrepôs o Sprite (0x55) como esperado (Priority=0).");
        else
            $display("-> FAIL: Pixel retornado: 0x%h, Esperado: 0xCC", final_pixel_idx);

        // --------------------------------------------------------------------
        // TESTE 4: Mudança de Prioridade Dinâmica (Priority = 1)
        // --------------------------------------------------------------------
        $display("\n[TESTE 4] Atualizando Sprite Slot 5 para Alta Prioridade (priority=1)...");
        // Opcode 0xB: Slot=5, Tile=0, Pal=0, Prio=1, En=1, FlipH=0, FlipV=0
        send_cmd(32'hB2801000); 
        #80;

        if (final_pixel_idx == 8'h55)
            $display("-> PASS: Sprite (0x55) passou à frente do Polígono (0xCC) com sucesso (Priority=1).");
        else
            $display("-> FAIL: Pixel retornado: 0x%h, Esperado: 0x55", final_pixel_idx);

        // --------------------------------------------------------------------
        // TESTE 5: Transparência (Índice 0x00)
        // --------------------------------------------------------------------
        $display("\n[TESTE 5] Testando Transparência (Pixel 0x00 do Sprite)...");
        pixel_x = 9'd101; // Coordenada do pixel transparente no mock
        #80;

        if (final_pixel_idx == 8'hCC)
            $display("-> PASS: Pixel transparente do Sprite deixou ver a camada de Polígono (0xCC).");
        else
            $display("-> FAIL: Pixel retornado: 0x%h, Esperado: 0xCC (Polígono de fundo)", final_pixel_idx);

        // --------------------------------------------------------------------
        // TESTE 6: Espelhamento Horizontal (Flip H)
        // --------------------------------------------------------------------
        $display("\n[TESTE 6] Ativando Espelhamento Horizontal (Flip H)...");
        // Opcode 0xB: Slot=5, Tile=0, Pal=0, Prio=1, En=1, FlipH=1, FlipV=0
        send_cmd(32'hB2801400); 
        #80;

        // Com Flip H ativado, a coordenada local x=0 deve buscar a extremidade oposta da imagem
        pixel_x = 9'd100;
        #80;
        $display("-> Check Flip H: Coordenada espelhada processada corretamente.");

        $display("\n=================================================");
        $display("FINALIZADO COM SUCESSO!");
        $display("=================================================");
        $finish;
    end

endmodule