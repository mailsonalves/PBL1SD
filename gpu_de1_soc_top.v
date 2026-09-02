module gpu_de1_soc_top (
    input  wire        CLOCK_50,
    input  wire [3:0]  KEY,
    input  wire [9:0]  SW,
    output wire [9:0]  LEDR,
    output wire        VGA_HS,
    output wire        VGA_VS,
    output wire [7:0]  VGA_R,
    output wire [7:0]  VGA_G,
    output wire [7:0]  VGA_B,
    output wire        VGA_BLANK_N,
    output wire        VGA_SYNC_N,
    output wire        VGA_CLK
);
    wire rst_n = KEY[0];

    reg clk_25m;
    always @(posedge CLOCK_50 or negedge rst_n) begin
        if (!rst_n) clk_25m <= 1'b0;
        else clk_25m <= ~clk_25m;
    end
    assign VGA_CLK    = clk_25m;
    assign VGA_SYNC_N = 1'b0;

    wire video_active;
    wire [8:0] pixel_x;
    wire [7:0] pixel_y;

    vga_sync u_vga_sync (
        .clk_25m(clk_25m), .rst_n(rst_n), .hsync(VGA_HS), .vsync(VGA_VS),
        .video_active(video_active), .pixel_x(pixel_x), .pixel_y(pixel_y)
    );
    assign VGA_BLANK_N = video_active;

    wire [31:0] cmd_data;
    wire        cmd_valid;
    wire        cmd_ready;

    board_input_controller u_input_ctrl (
        .clk(CLOCK_50), .rst_n(rst_n), .SW(SW), .KEY(KEY[3:1]),
        .cmd_ready(cmd_ready), .cmd_data(cmd_data), .cmd_valid(cmd_valid)
    );

    wire        tm_we;
    wire [5:0]  tm_wr_x;
    wire [4:0]  tm_wr_y;
    wire [7:0]  tm_wr_tile_id;
    wire [8:0]  scroll_x;
    wire [7:0]  scroll_y;
    wire        sat_we_pos, sat_we_attr;
    wire [4:0]  sat_addr;
    wire [8:0]  sat_in_x;
    wire [7:0]  sat_in_y;
    wire [7:0]  sat_in_tile_id;
    wire        sat_in_enable, sat_in_flip_h, sat_in_flip_v, sat_in_priority;
    wire [1:0]  sat_in_palette_bank;
    wire        rect_start;
    wire [8:0]  rect_x1, rect_x2;
    wire [7:0]  rect_y1, rect_y2;
    wire [7:0]  rect_color;
    wire        tri_start;
    wire [8:0]  tri_x0, tri_x1, tri_x2;
    wire [7:0]  tri_y0, tri_y1, tri_y2;
    wire [7:0]  tri_color;

    cmd_decoder u_cmd_decoder (
        .clk(clk_25m), .rst_n(rst_n), .cmd_data(cmd_data), .cmd_valid(cmd_valid),
        .cmd_ready(cmd_ready),
        .tm_we(tm_we), .tm_wr_x(tm_wr_x), .tm_wr_y(tm_wr_y), .tm_wr_tile_id(tm_wr_tile_id),
        .scroll_x(scroll_x), .scroll_y(scroll_y),
        .sat_we_pos(sat_we_pos), .sat_we_attr(sat_we_attr), .sat_addr(sat_addr),
        .out_x(sat_in_x), .out_y(sat_in_y), .out_tile_id(sat_in_tile_id),
        .out_enable(sat_in_enable), .out_flip_h(sat_in_flip_h), .out_flip_v(sat_in_flip_v),
        .out_priority(sat_in_priority), .out_palette_bank(sat_in_palette_bank),
        .rect_start(rect_start), .rect_x1(rect_x1), .rect_y1(rect_y1),
        .rect_x2(rect_x2), .rect_y2(rect_y2), .rect_color(rect_color),
        .tri_start(tri_start), .tri_x0(tri_x0), .tri_y0(tri_y0),
        .tri_x1(tri_x1), .tri_y1(tri_y1), .tri_x2(tri_x2), .tri_y2(tri_y2),
        .tri_color(tri_color)
    );

    wire [13:0] bg_vram_addr;
    wire [7:0]  bg_pixel;

    bg_engine u_bg_engine (
        .clk(CLOCK_50), .pixel_x(pixel_x), .pixel_y(pixel_y),
        .scroll_x(scroll_x), .scroll_y(scroll_y),
        .we(tm_we), .wr_x(tm_wr_x), .wr_y(tm_wr_y), .wr_tile_id(tm_wr_tile_id),
        .bg_vram_addr(bg_vram_addr)
    );

    wire [13:0] sp_pattern_addr;
    wire [7:0]  sp_pattern_data;
    wire [7:0]  sprite_pixel;
    wire        sprite_priority;
    wire [1:0]  sprite_palette_bank;
    wire        sprite_hit;

    sprite_engine u_sprite_engine (
        .clk(clk_25m), .rst_n(rst_n), .pixel_x(pixel_x), .pixel_y(pixel_y),
        .sat_we_pos(sat_we_pos), .sat_we_attr(sat_we_attr), .sat_addr(sat_addr),
        .in_x(sat_in_x), .in_y(sat_in_y), .in_tile_id(sat_in_tile_id),
        .in_enable(sat_in_enable), .in_flip_h(sat_in_flip_h), .in_flip_v(sat_in_flip_v),
        .in_priority(sat_in_priority), .in_palette_bank(sat_in_palette_bank),
        .pattern_addr(sp_pattern_addr), .pattern_data(sp_pattern_data),
        .sprite_pixel_idx(sprite_pixel), .sprite_priority(sprite_priority),
        .sprite_palette_bank(sprite_palette_bank), .sprite_hit(sprite_hit)
    );

    pattern_vram u_patterns (
        .clk(CLOCK_50), .we_a(1'b0), .addr_a(bg_vram_addr), .data_in_a(8'd0),
        .data_out_a(bg_pixel), .addr_b(sp_pattern_addr), .data_out_b(sp_pattern_data)
    );

    wire        rast_busy;
    wire        fb_we;
    wire [8:0]  fb_x;
    wire [7:0]  fb_y;
    wire [7:0]  fb_color;
    wire [7:0]  poly_pixel;

    polygon_rasterizer u_rasterizer (
        .clk(clk_25m), .rst_n(rst_n),
        .start_rect(rect_start),
        .rect_x1(rect_x1), .rect_y1(rect_y1), .rect_x2(rect_x2), .rect_y2(rect_y2),
        .color_idx(rect_color),
        .start_tri(tri_start),
        .tri_x0(tri_x0), .tri_y0(tri_y0),
        .tri_x1(tri_x1), .tri_y1(tri_y1),
        .tri_x2(tri_x2), .tri_y2(tri_y2),
        .tri_color(tri_color),
        .busy(rast_busy),
        .fb_we(fb_we), .fb_x(fb_x), .fb_y(fb_y), .fb_color(fb_color)
    );

    wire [16:0] buf_wr_addr = {fb_y, 8'd0} + {fb_y, 6'd0} + fb_x;
    wire [16:0] buf_rd_addr = {pixel_y, 8'd0} + {pixel_y, 6'd0} + pixel_x;

    polygon_buffer u_poly_buffer (
        .clk_wr(clk_25m), .we(fb_we), .addr_wr(buf_wr_addr), .data_in(fb_color),
        .clk_rd(clk_25m), .addr_rd(buf_rd_addr), .data_out(poly_pixel)
    );

    wire [7:0] final_pixel_idx;
    wire [1:0] final_palette_bank;

    compositor u_compositor (
        .sprite_hit(sprite_hit), .sprite_pixel(sprite_pixel), .sprite_priority(sprite_priority),
        .sprite_palette_bank(sprite_palette_bank),
        .poly_pixel(poly_pixel), .bg_pixel(bg_pixel),
        .final_pixel_idx(final_pixel_idx), .final_palette_bank(final_palette_bank)
    );

    wire [23:0] rgb_24;

    color_palette u_palette (
        .clk(CLOCK_50), .we(1'b0), .wr_addr(8'd0), .wr_data(24'd0),
        .rd_addr({final_palette_bank, final_pixel_idx[5:0]}), .rgb_out(rgb_24)
    );

    assign VGA_R = video_active ? rgb_24[23:16] : 8'd0;
    assign VGA_G = video_active ? rgb_24[15:8]  : 8'd0;
    assign VGA_B = video_active ? rgb_24[7:0]   : 8'd0;

    assign LEDR[0] = rast_busy;
    assign LEDR[1] = cmd_valid;
    assign LEDR[2] = SW[0];
    assign LEDR[9] = rst_n;
endmodule