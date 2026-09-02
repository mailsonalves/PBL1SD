module cmd_decoder (
    input  wire        clk,
    input  wire        rst_n,
    input  wire [31:0] cmd_data,
    input  wire        cmd_valid,
    output wire        cmd_ready,

    output reg          tm_we,
    output reg  [5:0]   tm_wr_x,
    output reg  [4:0]   tm_wr_y,
    output reg  [7:0]   tm_wr_tile_id,

    output reg  [8:0]   scroll_x,
    output reg  [7:0]   scroll_y,

    output reg          sat_we_pos,
    output reg          sat_we_attr,
    output reg  [4:0]   sat_addr,
    output reg  [8:0]   out_x,
    output reg  [7:0]   out_y,
    output reg  [7:0]   out_tile_id,
    output reg          out_enable,
    output reg          out_flip_h,
    output reg          out_flip_v,
    output reg          out_priority,
    output reg  [1:0]   out_palette_bank,

    output reg          rect_start,
    output reg  [8:0]   rect_x1,
    output reg  [7:0]   rect_y1,
    output reg  [8:0]   rect_x2,
    output reg  [7:0]   rect_y2,
    output reg  [7:0]   rect_color,

    output reg          tri_start,
    output reg  [8:0]   tri_x0,
    output reg  [7:0]   tri_y0,
    output reg  [8:0]   tri_x1,
    output reg  [7:0]   tri_y1,
    output reg  [8:0]   tri_x2,
    output reg  [7:0]   tri_y2,
    output reg  [7:0]   tri_color
);

    assign cmd_ready = 1'b1;

    localparam OP_TRI_P1            = 4'h7;
    localparam OP_TRI_P2             = 4'h8;
    localparam OP_TRI_P3             = 4'h9;
    localparam OP_WRITE_TILE        = 4'h3;
    localparam OP_SET_SCROLL        = 4'h5;
    localparam OP_UPDATE_SPRITE_POS = 4'h6;
    localparam OP_SET_SPRITE_ATTR   = 4'hB;
    localparam OP_RECT_P1           = 4'hC;
    localparam OP_RECT_P2           = 4'hD;

    reg [8:0] rect_x1_hold;
    reg [7:0] rect_y1_hold;
    reg [8:0] tri_x0_hold, tri_x1_hold;
    reg [7:0] tri_y0_hold, tri_y1_hold;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            tm_we <= 1'b0; tm_wr_x <= 6'd0; tm_wr_y <= 5'd0; tm_wr_tile_id <= 8'd0;
            scroll_x <= 9'd0; scroll_y <= 8'd0;
            sat_we_pos <= 1'b0; sat_we_attr <= 1'b0; sat_addr <= 5'd0;
            out_x <= 9'd0; out_y <= 8'd0; out_tile_id <= 8'd0;
            out_enable <= 1'b0; out_flip_h <= 1'b0; out_flip_v <= 1'b0;
            out_priority <= 1'b0; out_palette_bank <= 2'b00;
            rect_start <= 1'b0; rect_x1 <= 9'd0; rect_y1 <= 8'd0;
            rect_x2 <= 9'd0; rect_y2 <= 8'd0; rect_color <= 8'd0;
            rect_x1_hold <= 9'd0; rect_y1_hold <= 8'd0;
            tri_start <= 1'b0; tri_x0 <= 9'd0; tri_y0 <= 8'd0;
            tri_x1 <= 9'd0; tri_y1 <= 8'd0; tri_x2 <= 9'd0; tri_y2 <= 8'd0;
            tri_color <= 8'd0;
            tri_x0_hold <= 9'd0; tri_y0_hold <= 8'd0;
            tri_x1_hold <= 9'd0; tri_y1_hold <= 8'd0;
        end else begin
            tm_we       <= 1'b0;
            sat_we_pos  <= 1'b0;
            sat_we_attr <= 1'b0;
            rect_start  <= 1'b0;
            tri_start   <= 1'b0;

            if (cmd_valid) begin
                case (cmd_data[31:28])

                    OP_WRITE_TILE: begin
                        tm_we         <= 1'b1;
                        tm_wr_x       <= cmd_data[27:22];
                        tm_wr_y       <= cmd_data[21:17];
                        tm_wr_tile_id <= cmd_data[16:9];
                    end

                    OP_SET_SCROLL: begin
                        scroll_x <= cmd_data[16:8];
                        scroll_y <= 8'd0;
                    end

                    OP_UPDATE_SPRITE_POS: begin
                        sat_we_pos <= 1'b1;
                        sat_addr   <= cmd_data[27:23];
                        out_x      <= cmd_data[22:14];
                        out_y      <= cmd_data[13:6];
                    end

                    OP_SET_SPRITE_ATTR: begin
                        sat_we_attr      <= 1'b1;
                        sat_addr         <= cmd_data[27:23];
                        out_tile_id      <= cmd_data[22:15];
                        out_palette_bank <= cmd_data[14:13];
                        out_priority     <= cmd_data[12];
                        out_enable       <= cmd_data[11];
                        out_flip_h       <= cmd_data[10];
                        out_flip_v       <= cmd_data[9];
                    end

                    OP_RECT_P1: begin
                        rect_x1_hold <= cmd_data[27:19];
                        rect_y1_hold <= cmd_data[18:11];
                    end

                    OP_RECT_P2: begin
                        rect_x1    <= rect_x1_hold;
                        rect_y1    <= rect_y1_hold;
                        rect_x2    <= cmd_data[27:19];
                        rect_y2    <= cmd_data[18:11];
                        rect_color <= cmd_data[10:3];
                        rect_start <= 1'b1;
                    end

                    OP_TRI_P1: begin
                        tri_x0_hold <= cmd_data[27:19];
                        tri_y0_hold <= cmd_data[18:11];
                    end

                    OP_TRI_P2: begin
                        tri_x1_hold <= cmd_data[27:19];
                        tri_y1_hold <= cmd_data[18:11];
                    end

                    OP_TRI_P3: begin
                        tri_x0    <= tri_x0_hold;
                        tri_y0    <= tri_y0_hold;
                        tri_x1    <= tri_x1_hold;
                        tri_y1    <= tri_y1_hold;
                        tri_x2    <= cmd_data[27:19];
                        tri_y2    <= cmd_data[18:11];
                        tri_color <= cmd_data[10:3];
                        tri_start <= 1'b1;
                    end

                endcase
            end
        end
    end
endmodule