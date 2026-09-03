module vga_sync (
    input  wire        clk_25m,      // Clock de pixel (25.175 MHz)
    input  wire        rst_n,
    output reg         hsync,
    output reg         vsync,
    output wire        video_active,
    output wire [8:0]  pixel_x,      // 0 a 319 (Resolução Lógica)
    output wire [7:0]  pixel_y       // 0 a 239 (Resolução Lógica)
);

    localparam H_ACTIVE = 640, H_FP = 16, H_SYNC = 96, H_BP = 48, H_TOTAL = 800;
    localparam V_ACTIVE = 480, V_FP = 10, V_SYNC = 2,  V_BP = 33, V_TOTAL = 525;

    reg [9:0] h_cnt;
    reg [9:0] v_cnt;

    always @(posedge clk_25m or negedge rst_n) begin
        if (!rst_n) begin
            h_cnt <= 10'd0;
            v_cnt <= 10'd0;
        end else begin
            if (h_cnt == H_TOTAL - 1) begin
                h_cnt <= 10'd0;
                if (v_cnt == V_TOTAL - 1)
                    v_cnt <= 10'd0;
                else
                    v_cnt <= v_cnt + 10'd1;
            end else begin
                h_cnt <= h_cnt + 10'd1;
            end
        end
    end

    always @(posedge clk_25m or negedge rst_n) begin
        if (!rst_n) begin
            hsync <= 1'b1;
            vsync <= 1'b1;
        end else begin
            hsync <= ~((h_cnt >= (H_ACTIVE + H_FP)) && (h_cnt < (H_ACTIVE + H_FP + H_SYNC)));
            vsync <= ~((v_cnt >= (V_ACTIVE + V_FP)) && (v_cnt < (V_ACTIVE + V_FP + V_SYNC)));
        end
    end

    assign video_active = (h_cnt < H_ACTIVE) && (v_cnt < V_ACTIVE);
    assign pixel_x      = video_active ? h_cnt[9:1] : 9'd0;
    assign pixel_y      = video_active ? v_cnt[8:1] : 8'd0;

endmodule
