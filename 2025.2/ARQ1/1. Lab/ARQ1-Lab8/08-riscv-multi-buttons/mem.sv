module mem (
  input  logic        clk, we,
  input  logic [31:0] a, wd,
  output logic [31:0] rd);

  logic [31:0] MEM [0:511];

  initial
    $readmemh("data.mem", MEM);


endmodule