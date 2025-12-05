module test; 
  reg clk, reset;
  reg [9:0] LEDR;       // memory-mapped I/O register for LEDR
  reg [23:0] hex_digits; // memory-mapped I/O register for HEX
  wire memwrite;
  wire [31:0] writedata, addr, readdata;

  initial begin
    $monitor("TIME=%0t | addr=%h | WRITE=%b | WRITEDATA=%h | LEDR=%h",
             $time, addr, memwrite, writedata, LEDR);
    clk = 0; reset = 1;
    $dumpfile("dump.vcd");
    $dumpvars(0, test);
    #20 reset = 0;
    #5000 $finish;
  end

  initial 
    forever #5 clk = ~clk;

  // microprocessor
  riscvmulti cpu(clk, reset, addr, writedata, memwrite, readdata);

  // memory 
  mem memory(clk, memwrite, addr, writedata, readdata);

  // memory-mapped i/o
  wire isIO  = addr[8]; // 0x0000_0100
  wire isRAM = !isIO;
  localparam IO_LEDS_bit = 2; // 0x0000_0104
  localparam IO_HEX_bit  = 3; // 0x0000_0108
  always @(posedge clk)
    if (memwrite & isIO) begin // memory-mapped I/O
      if (addr[IO_LEDS_bit])
        LEDR <= writedata;
      if (addr[IO_HEX_bit])
        hex_digits <= writedata;
  end
endmodule
