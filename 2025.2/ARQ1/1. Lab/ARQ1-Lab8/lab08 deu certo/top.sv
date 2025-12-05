module top (
    input CLOCK_50, 
    input [9:0] SW,
    output reg [9:0] LEDR,
    output [6:0] HEX5, HEX4, HEX3, HEX2, HEX1, HEX0
);

    wire memwrite, reset;
    wire [31:0] addr, writedata, readdata;
    wire [3:0]  mem_be;
    wire [31:0] ram_readdata, io_readdata;
    
    // Geração de Clock
    wire clk;
    reg [1:0] counter = 0;
    
    `ifdef SIM
        assign clk = CLOCK_50;
    `else
        // Divisor de clock simples para FPGA real
        always @(posedge CLOCK_50) counter <= counter + 1;
        assign clk = counter[0];
    `endif

    // Reset ao ligar
    power_on_reset por(clk, reset);
    
    // Instância da CPU
    riscvmulti cpu(
        .clk(clk),
        .reset(reset),
        .Address(addr),
        .WriteData(writedata),
        .MemWrite(memwrite),
        .ReadData(readdata),
        .MemByteEnable(mem_be)
    );

    // Memória RAM (Portas de vídeo aterradas pois VGA foi removido)
    mem ram(
        .clk(clk),
        .we(memwrite & !addr[8]), // Write Enable se NÃO for I/O (bit 8 = 0)
        .be(mem_be),
        .a(addr),
        .wd(writedata),
        .rd(ram_readdata),
        .va(32'b0), // Endereço de vídeo zerado
        .vd()       // Saída de dados de vídeo desconectada
    );

    // --- Mapeamento de I/O ---
    // Endereço Base de I/O: 0x100 (quando addr[8] == 1)
    wire isIO  = addr[8]; 
    
    // Decodificadores de 7 segmentos
    reg [23:0] hex_digits;
    dec7seg hex0(hex_digits[3:0],   HEX0);
    dec7seg hex1(hex_digits[7:4],   HEX1);
    dec7seg hex2(hex_digits[11:8],  HEX2);
    dec7seg hex3(hex_digits[15:12], HEX3);
    dec7seg hex4(hex_digits[19:16], HEX4);
    dec7seg hex5(hex_digits[23:20], HEX5);

    // Lógica de Escrita (Output)
    always @(posedge clk) begin
        if (reset) begin
            LEDR <= 0;
            hex_digits <= 0;
        end else if (memwrite & isIO) begin
            // Endereço: 0x104 (Base + 4) -> LEDR
            // Endereço: 0x108 (Base + 8) -> HEX
            if (mem_be == 4'b1111) begin // Apenas permite escrita de Word completa (sw)
                if (addr[2]) LEDR <= writedata[9:0];       
                if (addr[3]) hex_digits <= writedata[23:0]; 
            end
        end
    end

    // Lógica de Leitura (Input)
    // Endereço: 0x120 (Base + 32, pois addr[5] é o bit 32) -> SW
    assign io_readdata = (isIO && addr[5]) ? {22'b0, SW} : 32'b0;
    
    // MUX de dados para a CPU (RAM ou I/O)
    assign readdata = isIO ? io_readdata : ram_readdata;

endmodule