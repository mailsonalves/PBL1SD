// ============================================================================
// sprite_engine.v (Atualizado com Atributos Completos + Banco de Paleta)
// ============================================================================
module sprite_engine (
    input  wire        clk,
    input  wire        rst_n,
    
    // Coordenadas VGA (320x240)
    input  wire [8:0]  pixel_x,
    input  wire [7:0]  pixel_y,
    
    // Interface de escrita via cmd_decoder
    input  wire        sat_we_pos,
    input  wire        sat_we_attr,
    input  wire [4:0]  sat_addr,
    input  wire [8:0]  in_x,
    input  wire [7:0]  in_y,
    input  wire [7:0]  in_tile_id,
    input  wire        in_enable,
    input  wire        in_flip_h,
    input  wire        in_flip_v,
    input  wire        in_priority,
    input  wire [1:0]  in_palette_bank,
    
    // Interface com Pattern VRAM
    output reg  [13:0] pattern_addr,
    input  wire [7:0]  pattern_data,
    
    // Saídas para o Compositor e Paleta
    output reg  [7:0]  sprite_pixel_idx,
    output reg         sprite_priority,
    output reg  [1:0]  sprite_palette_bank,
    output reg         sprite_hit
);

    // Estrutura interna da SAT (32 slots)
    reg [8:0] sat_x     [0:31];
    reg [7:0] sat_y     [0:31];
    reg [7:0] sat_tile  [0:31];
    reg       sat_en    [0:31];
    reg       sat_fh    [0:31];
    reg       sat_fv    [0:31];
    reg       sat_prio  [0:31];
    reg [1:0] sat_pal   [0:31];

    integer i;

    // Escrita na SAT
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (i = 0; i < 32; i = i + 1) begin
                sat_en[i]   <= 1'b0;
                sat_x[i]    <= 9'd0;
                sat_y[i]    <= 8'd0;
                sat_tile[i] <= 8'd0;
                sat_fh[i]   <= 1'b0;
                sat_fv[i]   <= 1'b0;
                sat_prio[i] <= 1'b0;
                sat_pal[i]  <= 2'b00;
            end
        end else begin
            if (sat_we_pos) begin
                sat_x[sat_addr] <= in_x;
                sat_y[sat_addr] <= in_y;
            end
            if (sat_we_attr) begin
                sat_tile[sat_addr] <= in_tile_id;
                sat_pal[sat_addr]  <= in_palette_bank;
                sat_prio[sat_addr] <= in_priority;
                sat_en[sat_addr]   <= in_enable;
                sat_fh[sat_addr]   <= in_flip_h;
                sat_fv[sat_addr]   <= in_flip_v;
            end
        end
    end

    // Avaliação de hit (varredura do slot 31 até 0; menor slot tem maior prioridade na SAT)
    reg [4:0] active_sprite;
    reg       found_sprite;
    reg [3:0] rel_x;
    reg [3:0] rel_y;

    always @(*) begin
        found_sprite  = 1'b0;
        active_sprite = 5'd0;
        rel_x         = 4'd0;
        rel_y         = 4'd0;
        
        for (i = 31; i >= 0; i = i - 1) begin
            if (sat_en[i] &&
                (pixel_x >= sat_x[i]) && (pixel_x < sat_x[i] + 16) &&
                (pixel_y >= sat_y[i]) && (pixel_y < sat_y[i] + 16)) begin
                
                found_sprite  = 1'b1;
                active_sprite = i[4:0];
                
                // Aplicação do Espelhamento (Flip H / Flip V)
                rel_x = sat_fh[i] ? (15 - (pixel_x - sat_x[i])) : (pixel_x - sat_x[i]);
                rel_y = sat_fv[i] ? (15 - (pixel_y - sat_y[i])) : (pixel_y - sat_y[i]);
            end
        end
    end

    // Cálculo do endereço de VRAM (Tile 16x16 montado por 4 tiles 8x8 consecutivos)
    // Convenção: base=TL(sup-esq), base+1=TR(sup-dir), base+2=BL(inf-esq), base+3=BR(inf-dir)
    wire [1:0] quadrant = {rel_y[3], rel_x[3]};
    wire [7:0] effective_tile = sat_tile[active_sprite] + {6'd0, quadrant};

    always @(*) begin
        if (found_sprite) begin
            pattern_addr = {effective_tile, rel_y[2:0], rel_x[2:0]};
        end else begin
            pattern_addr = 14'd0;
        end
    end

    // Pipeline de saída com verificação de transparência (0x00)
    always @(posedge clk) begin
        if (found_sprite && (pattern_data != 8'h00)) begin
            sprite_hit          <= 1'b1;
            sprite_pixel_idx    <= pattern_data;
            sprite_priority     <= sat_prio[active_sprite];
            sprite_palette_bank <= sat_pal[active_sprite];
        end else begin
            sprite_hit          <= 1'b0;
            sprite_pixel_idx    <= 8'h00;
            sprite_priority     <= 1'b0;
            sprite_palette_bank <= 2'b00;
        end
    end

endmodule