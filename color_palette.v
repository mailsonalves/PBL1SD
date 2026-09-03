module color_palette (
    input  wire        clk,
    input  wire        we,
    input  wire [7:0]  wr_addr,
    input  wire [23:0] wr_data,
    input  wire [7:0]  rd_addr,
    output reg  [23:0] rgb_out
);

    // Infere blocos de memoria M10K na FPGA
    (* ramstyle = "M10K, no_rw_check" *) reg [23:0] clut_ram [0:255];

    // Carrega a paleta gerada pelo Python
    initial begin
        $readmemh("palette.hex", clut_ram);
    end

    always @(posedge clk) begin
        if (we)
            clut_ram[wr_addr] <= wr_data;
        
        rgb_out <= clut_ram[rd_addr];
    end

endmodule
