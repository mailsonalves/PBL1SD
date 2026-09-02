module compositor (
    input  wire        sprite_hit,
    input  wire [7:0]  sprite_pixel,
    input  wire        sprite_priority,
    input  wire [1:0]  sprite_palette_bank,

    input  wire [7:0]  poly_pixel,
    input  wire [7:0]  bg_pixel,

    output reg  [7:0]  final_pixel_idx,
    output reg  [1:0]  final_palette_bank
);
    always @(*) begin
        if (sprite_hit && sprite_priority) begin
            final_pixel_idx    = sprite_pixel;
            final_palette_bank = sprite_palette_bank;
        end else if (poly_pixel != 8'h00) begin
            final_pixel_idx    = poly_pixel;
            final_palette_bank = 2'b00;
        end else if (bg_pixel != 8'h00) begin
            final_pixel_idx    = bg_pixel;
            final_palette_bank = 2'b00;
        end else if (sprite_hit) begin
            final_pixel_idx    = sprite_pixel;
            final_palette_bank = sprite_palette_bank;
        end else begin
            final_pixel_idx    = 8'h00;
            final_palette_bank = 2'b00;
        end
    end
endmodule