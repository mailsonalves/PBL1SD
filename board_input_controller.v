module board_input_controller (
    input  wire        clk,          // Clock 50 MHz
    input  wire        rst_n,
    input  wire [9:0]  SW,
    input  wire [3:1]  KEY,          // KEY[1] = Pulo
    input  wire        cmd_ready,
    output reg  [31:0] cmd_data,
    output reg         cmd_valid
);

    // 1. Gerador de Tick (Frame de ~60 Hz)
    reg [19:0] frame_cnt;
    wire frame_tick = (frame_cnt == 20'd833333);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) frame_cnt <= 20'd0;
        else if (frame_tick) frame_cnt <= 20'd0;
        else frame_cnt <= frame_cnt + 20'd1;
    end

    // 2. Detector de Borda e "Memória de Pulo"
    reg [2:0] key1_sync;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) key1_sync <= 3'b111;
        else key1_sync <= {key1_sync[1:0], KEY[1]};
    end
    wire flap_pressed = (key1_sync[2] && !key1_sync[1]); 

    reg jump_request;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) 
            jump_request <= 1'b0;
        else if (flap_pressed) 
            jump_request <= 1'b1; // Salva o clique do jogador
        else if (frame_tick) 
            jump_request <= 1'b0; // Limpa o clique após aplicar na física
    end

    // 3. Física do Pássaro e Rolagem
    reg signed [11:0] bird_y_sub;   
    reg signed [7:0]  velocity_y;   
    reg [8:0]         bg_scroll_x;  

    localparam GRAVITY   = 8'sd3;    // Gravidade aumentada
    localparam JUMP_IMP  = -8'sd60;  // Força do pulo aumentada
    localparam MAX_FALL  = 8'sd96;   
    localparam GROUND_Y  = 8'd190;   // Altura da terra do chão

    wire [7:0] current_bird_y = bird_y_sub[11:4];

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            bird_y_sub  <= {8'd100, 4'd0};
            velocity_y  <= 8'd0;
            bg_scroll_x <= 9'd0;
        end else if (frame_tick) begin
            
            // Scroll do Fundo
            if (bg_scroll_x >= 9'd319) bg_scroll_x <= 9'd0;
            else bg_scroll_x <= bg_scroll_x + 9'd1;

            // Aplica a gravidade e o pulo (lendo a memória jump_request)
            if (jump_request) begin
                velocity_y <= JUMP_IMP;
            end else if (velocity_y < MAX_FALL) begin
                velocity_y <= velocity_y + GRAVITY;
            end

            // Limites (Chão e Teto)
            if (current_bird_y >= GROUND_Y && velocity_y > 0) begin
                bird_y_sub <= {GROUND_Y, 4'd0};
                velocity_y <= 8'd0;
            end else if (bird_y_sub <= 12'd0 && velocity_y < 0) begin
                bird_y_sub <= 12'd0;
                velocity_y <= 8'd0;
            end else begin
                bird_y_sub <= bird_y_sub + {{4{velocity_y[7]}}, velocity_y};
            end
        end
    end

    // 4. FSM Emissora de Comandos
localparam S_INIT     = 2'd3;   // novo estado
localparam S_IDLE     = 2'd0;
localparam S_SEND_SCR = 2'd1;
localparam S_SEND_SPR = 2'd2;

reg [1:0] state;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state     <= S_INIT;      // começa em S_INIT, não em S_IDLE
        cmd_data  <= 32'd0;
        cmd_valid <= 1'b0;
    end else begin
        cmd_valid <= 1'b0;
        case (state)
            S_INIT: begin
                if (cmd_ready) begin
                    // OP_SET_SPRITE_ATTR (4'hB), sat_addr=0, tile_id=0,
                    // palette_bank=00, priority=1, enable=1, flip_h=0, flip_v=0
                    cmd_data  <= {4'hB, 5'd0, 8'd0, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 9'd0};
                    cmd_valid <= 1'b1;
                    state     <= S_IDLE;
                end
            end
            S_IDLE: begin
                if (frame_tick) state <= S_SEND_SCR;
            end
            S_SEND_SCR: begin
                if (cmd_ready) begin
                    cmd_data  <= {4'h5, 11'd0, bg_scroll_x, 8'd0};
                    cmd_valid <= 1'b1;
                    state     <= S_SEND_SPR;
                end
            end
            S_SEND_SPR: begin
                if (cmd_ready) begin
                    cmd_data  <= {4'h6, 5'd0, 9'd152, current_bird_y, 6'd0};
                    cmd_valid <= 1'b1;
                    state     <= S_IDLE;
                end
            end
            default: state <= S_IDLE;
        endcase
    end
end
endmodule