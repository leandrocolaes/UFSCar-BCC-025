module mem (
  input  logic        clk, we,
  input  logic [31:0] a, wd,
  output logic [31:0] rd
  );
  integer i;
  logic  [31:0] RAM [0:255];

  // initialize memory with instructions and data
  initial begin
    $readmemh("riscv.hex", RAM);
	//for (i = 0; i < 256; i = i + 1) RAM[i] = 32'b0;
	//RAM[0] = 32'h10c00293;
	//RAM[1] = 32'h20000313;
	//RAM[2] = 32'h0062a023;
	//RAM[3] = 32'hff5ff06f;
end
endmodule
