module polygon_rasterizer (
    input  wire        clk,
    input  wire        rst_n,

    input  wire        start_rect,
    input  wire [8:0]  rect_x1,
    input  wire [7:0]  rect_y1,
    input  wire [8:0]  rect_x2,
    input  wire [7:0]  rect_y2,
    input  wire [7:0]  color_idx,

    input  wire        start_tri,
    input  wire [8:0]  tri_x0,
    input  wire [7:0]  tri_y0,
    input  wire [8:0]  tri_x1,
    input  wire [7:0]  tri_y1,
    input  wire [8:0]  tri_x2,
    input  wire [7:0]  tri_y2,
    input  wire [7:0]  tri_color,

    output reg          busy,

    output reg          fb_we,
    output reg  [8:0]   fb_x,
    output reg  [7:0]   fb_y,
    output reg  [7:0]   fb_color
);

    localparam IDLE        = 2'b00;
    localparam RASTER_RECT = 2'b01;
    localparam RASTER_TRI  = 2'b10;

    reg [1:0] state;

    // --- Retangulo ---
    reg [8:0] rx_min, rx_max, rcurr_x;
    reg [7:0] ry_min, ry_max, rcurr_y;

    // --- Triangulo ---
    reg signed [9:0] v0x, v1x, v2x;
    reg signed [8:0] v0y, v1y, v2y;
    reg [8:0] tx_min, tx_max, tcurr_x;
    reg [7:0] ty_min, ty_max, tcurr_y;
    reg [7:0] tcolor_hold;

    // Funcoes de aresta (aritmetica inteira com sinal)
    wire signed [19:0] e0 = (v1x - v0x) * ($signed({1'b0,tcurr_y}) - v0y) - (v1y - v0y) * (tcurr_x - v0x);
    wire signed [19:0] e1 = (v2x - v1x) * ($signed({1'b0,tcurr_y}) - v1y) - (v2y - v1y) * (tcurr_x - v1x);
    wire signed [19:0] e2 = (v0x - v2x) * ($signed({1'b0,tcurr_y}) - v2y) - (v0y - v2y) * (tcurr_x - v2x);
    wire inside_tri = (e0 >= 0 && e1 >= 0 && e2 >= 0) || (e0 <= 0 && e1 <= 0 && e2 <= 0);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE; busy <= 1'b0; fb_we <= 1'b0;
            fb_x <= 9'd0; fb_y <= 8'd0; fb_color <= 8'd0;
            rcurr_x <= 9'd0; rcurr_y <= 8'd0;
            tcurr_x <= 9'd0; tcurr_y <= 8'd0;
        end else begin
            fb_we <= 1'b0;

            case (state)
                IDLE: begin
                    if (start_rect) begin
                        busy    <= 1'b1;
                        fb_color<= color_idx;
                        rx_min  <= (rect_x1 < rect_x2) ? rect_x1 : rect_x2;
                        rx_max  <= (rect_x1 < rect_x2) ? rect_x2 : rect_x1;
                        ry_min  <= (rect_y1 < rect_y2) ? rect_y1 : rect_y2;
                        ry_max  <= (rect_y1 < rect_y2) ? rect_y2 : rect_y1;
                        rcurr_x <= (rect_x1 < rect_x2) ? rect_x1 : rect_x2;
                        rcurr_y <= (rect_y1 < rect_y2) ? rect_y1 : rect_y2;
                        state   <= RASTER_RECT;
                    end else if (start_tri) begin
                        busy   <= 1'b1;
                        v0x <= $signed({1'b0,tri_x0}); v0y <= $signed({1'b0,tri_y0});
                        v1x <= $signed({1'b0,tri_x1}); v1y <= $signed({1'b0,tri_y1});
                        v2x <= $signed({1'b0,tri_x2}); v2y <= $signed({1'b0,tri_y2});
                        tcolor_hold <= tri_color;
                        tx_min <= (tri_x0 < tri_x1) ? ((tri_x0 < tri_x2) ? tri_x0 : tri_x2) : ((tri_x1 < tri_x2) ? tri_x1 : tri_x2);
                        tx_max <= (tri_x0 > tri_x1) ? ((tri_x0 > tri_x2) ? tri_x0 : tri_x2) : ((tri_x1 > tri_x2) ? tri_x1 : tri_x2);
                        ty_min <= (tri_y0 < tri_y1) ? ((tri_y0 < tri_y2) ? tri_y0 : tri_y2) : ((tri_y1 < tri_y2) ? tri_y1 : tri_y2);
                        ty_max <= (tri_y0 > tri_y1) ? ((tri_y0 > tri_y2) ? tri_y0 : tri_y2) : ((tri_y1 > tri_y2) ? tri_y1 : tri_y2);
                        tcurr_x <= (tri_x0 < tri_x1) ? ((tri_x0 < tri_x2) ? tri_x0 : tri_x2) : ((tri_x1 < tri_x2) ? tri_x1 : tri_x2);
                        tcurr_y <= (tri_y0 < tri_y1) ? ((tri_y0 < tri_y2) ? tri_y0 : tri_y2) : ((tri_y1 < tri_y2) ? tri_y1 : tri_y2);
                        state  <= RASTER_TRI;
                    end
                end

                RASTER_RECT: begin
                    fb_we <= 1'b1; fb_x <= rcurr_x; fb_y <= rcurr_y;
                    if (rcurr_x < rx_max) begin
                        rcurr_x <= rcurr_x + 1'b1;
                    end else begin
                        rcurr_x <= rx_min;
                        if (rcurr_y < ry_max) begin
                            rcurr_y <= rcurr_y + 1'b1;
                        end else begin
                            state <= IDLE; busy <= 1'b0;
                        end
                    end
                end

                RASTER_TRI: begin
                    fb_color <= tcolor_hold;
                    fb_x     <= tcurr_x;
                    fb_y     <= tcurr_y;
                    fb_we    <= inside_tri;

                    if (tcurr_x < tx_max) begin
                        tcurr_x <= tcurr_x + 1'b1;
                    end else begin
                        tcurr_x <= tx_min;
                        if (tcurr_y < ty_max) begin
                            tcurr_y <= tcurr_y + 1'b1;
                        end else begin
                            state <= IDLE; busy <= 1'b0;
                        end
                    end
                end
            endcase
        end
    end
endmodule