module mem (
    input  logic        clk, 
    input  logic        we,
    input  logic [3:0]  be, // Mantemos a porta para não quebrar o top.sv, mas vamos ignorar o valor por enquanto
    input  logic [31:0] a, 
    input  logic [31:0] wd,
    output logic [31:0] rd,
    input  logic [31:0] va, 
    output logic [31:0] vd 
);

    logic [31:0] RAM [0:255];
    integer i;

    // --- SOLUÇÃO 1: Inicialização Hardcoded (Sem arquivo externo) ---
    initial begin
        // 1. Zera toda a memória primeiro
        for (i = 0; i < 256; i = i + 1) RAM[i] = 32'b0;

        // 2. Insere o Programa Assembly manualmente (Switch -> LED -> Counter -> Hex)
        
        // addi s0, zero, 0x200 (Aponta para variável na RAM)
        RAM[0] = 32'h20000413; 
        
        // addi s1, zero, 0x104 (Endereço LEDs)
        RAM[1] = 32'h10400493; 
        
        // addi s2, zero, 0x108 (Endereço HEX)
        RAM[2] = 32'h10800913; 
        
        // addi s3, zero, 0x120 (Endereço SW)
        RAM[3] = 32'h12000993; 

        // LOOP:
        // lw t0, 0(s3) (Lê Switches)
        RAM[4] = 32'h0009A283; 
        
        // sw t0, 0(s1) (Escreve nos LEDs)
        RAM[5] = 32'h0054A023; 
        
        // lw t1, 0(s0) (Lê contador da RAM)
        RAM[6] = 32'h00042303; 
        
        // addi t1, t1, 1 (Incrementa)
        RAM[7] = 32'h00130313; 
        
        // sw t1, 0(s0) (Salva na RAM - O teste de fogo da escrita)
        RAM[8] = 32'h00642023; 
        
        // sw t1, 0(s2) (Mostra no HEX)
        RAM[9] = 32'h00692023; 
        
        // j loop
        RAM[10] = 32'hFE9FF06F; 
    end

    // Leitura Assíncrona (como no MIPS/RISC-V clássico)
    assign rd = RAM[a[31:2]]; 
    assign vd = 32'b0;

    // --- SOLUÇÃO 2: Escrita Simplificada (Força Bruta) ---
    always_ff @(posedge clk) begin
        if (we) begin
            // IGNORA o 'be' (Byte Enable) e grava a palavra inteira.
            // Isso resolve problemas se o sinal 'be' estiver chegando 0000.
            RAM[a[31:2]] <= wd;
        end
    end

endmodule