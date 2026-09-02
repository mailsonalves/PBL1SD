// Framebuffer Dual-Port para Polígonos (76.800 bytes)
module polygon_buffer (
    input  wire        clk_wr,
    input  wire        we,
    input  wire [16:0] addr_wr,
    input  wire [7:0]  data_in,

    input  wire        clk_rd,
    input  wire [16:0] addr_rd,
    output reg  [7:0]  data_out
);

    (* ramstyle = "M10K, no_rw_check" *) reg [7:0] ram [0:76799];

    always @(posedge clk_wr) begin
        if (we)
            ram[addr_wr] <= data_in;
    end

    always @(posedge clk_rd) begin
        data_out <= ram[addr_rd];
    end

endmodule