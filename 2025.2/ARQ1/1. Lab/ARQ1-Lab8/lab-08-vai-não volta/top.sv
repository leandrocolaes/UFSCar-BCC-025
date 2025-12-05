module top (
    input CLOCK_50, 
    input [9:0] SW,
    input [3:0] KEY,
    output reg [9:0] LEDR,
    output [6:0] HEX5, HEX4, HEX3, HEX2, HEX1, HEX0
);

    wire memwrite;
    // Reset ativo quando SW[9] está para baixo (0)
    wire reset = ~SW[9]; 

    wire [31:0] addr, writedata, readdata;
    wire [31:0] MEM_readdata, IO_readdata; // Nomes solicitados
    
    // Geração de Clock
    wire clk;
    reg [1:0] counter = 0;
    always @(posedge CLOCK_50) counter <= counter + 1;
    assign clk = counter[0]; 

    // Instância da CPU
    riscvmulti cpu(
        .clk(clk),
        .reset(reset),
        .Address(addr),
        .WriteData(writedata),
        .MemWrite(memwrite),
        .ReadData(readdata),
        .MemByteEnable() 
    );

    // Memória RAM (Exatamente como pedido)
    mem ram(clk, memwrite, addr, writedata, MEM_readdata);

    // --- Mapeamento de I/O ---
    wire isIO  = addr[8]; // Endereços 0x100+
    
    // Decodificadores de 7 segmentos
    reg [23:0] hex_digits;
    dec7seg hex0(hex_digits[3:0],   HEX0);
    dec7seg hex1(hex_digits[7:4],   HEX1);
    dec7seg hex2(hex_digits[11:8],  HEX2);
    dec7seg hex3(hex_digits[15:12], HEX3);
    dec7seg hex4(hex_digits[19:16], HEX4);
    dec7seg hex5(hex_digits[23:20], HEX5);

    // Lógica de Escrita em I/O
    always @(posedge clk) begin
        if (reset) begin
            LEDR <= 0;
            hex_digits <= 0;
        end else if (memwrite & isIO) begin
            // 0x104 -> LEDR (addr[2])
            if (addr[2]) LEDR <= writedata[9:0];      
            // 0x108 -> HEX (addr[3])
            if (addr[3]) hex_digits <= writedata[23:0]; 
        end
    end

    // Lógica de Leitura de I/O
    // 0x120 -> SW (addr[5])
    // 0x110 -> KEY (addr[4])
    assign IO_readdata = (addr[5]) ? {22'b0, SW} : 
                         (addr[4]) ? {28'b0, KEY} : 
                         32'b0;
    
    // MUX de dados (Exatamente como pedido)
    assign readdata = isIO ? IO_readdata : MEM_readdata;

endmodule