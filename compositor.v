module compositor (
    input  wire [7:0] bg_pixel,
    input  wire [7:0] sp_pixel,
    input  wire [7:0] poly_pixel,
    output reg  [7:0] final_pixel_index
);

    always @(*) begin
        // 1º: Sprites
        if (sp_pixel != 8'h00)
            final_pixel_index = sp_pixel;
        // 2º: Polígonos
        else if (poly_pixel != 8'h00)
            final_pixel_index = poly_pixel;
        // 3º: Background
        else
            final_pixel_index = bg_pixel;
    end

endmodule
