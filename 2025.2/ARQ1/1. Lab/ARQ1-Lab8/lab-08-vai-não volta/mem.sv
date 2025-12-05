module mem (
    input  logic        clk, 
    input  logic        we,
    input  logic [31:0] a, 
    input  logic [31:0] wd,
    output logic [31:0] rd
);

    logic [31:0] RAM [0:255];
    integer i;

    initial begin
        // Zera memória
        for (i = 0; i < 256; i = i + 1) RAM[i] = 32'b0;

        // --- SETUP ---
        // li s0, 0x200 (RAM Dados)
        RAM[0] = 32'h20000413;
        // li s1, 0x104 (Endereço LEDs)
        RAM[1] = 32'h10400493;
        // li s2, 0x120 (Endereço SWITCHES - SW) <--- USANDO SW AGORA
        RAM[2] = 32'h12000913;
        // li s5, 0x108 (Endereço HEX)
        RAM[3] = 32'h10800A93;
        // li s3, 1 (Valor inicial LED: 0000000001)
        RAM[4] = 32'h00100993;

        // --- LOOP (RAM[5]) ---
        // sw s3, 0(s1) (Atualiza LEDs)
        RAM[5] = 32'h0134A023;
        // sw s3, 0(s5) (Atualiza HEX)
        RAM[6] = 32'h013A2023;
        // sw s3, 0(s0) (Salva na RAM)
        RAM[7] = 32'h01342023;

        // --- DELAY ---
        // li t0, 0x40000 (Ajuste a velocidade aqui)
        RAM[8] = 32'h000402B7; 
        // addi t0, t0, -1
        RAM[9] = 32'hFFF28293;
        // bne t0, zero, -4
        RAM[10] = 32'hFE029EE3;

        // --- LEITURA SW[0] ---
        // lw t1, 0(s2) (Lê Switches)
        RAM[11] = 00092303; 
        // andi t1, t1, 1 (Máscara bit 0)
        RAM[12] = 00137313;
        // beq t1, zero, ESQUERDA (Se SW[0]=0, pula para Esquerda)
        RAM[13] = 32'h00030E63; // Pula para RAM[20]

        // --- DIREITA (SW[0]=1) ---
        // li t2, 1 (Bit 0)
        RAM[14] = 32'h00100393;
        // beq s3, t2, WRAP_TO_9 (Se já está na ponta dir, vai pro bit 9)
        RAM[15] = 32'h00798463; // Pula para RAM[18]
        // srli s3, s3, 1 (Shift Right normal)
        RAM[16] = 32'h0019D993;
        // j LOOP
        RAM[17] = 32'hFD0FF06F; // Volta para RAM[5]

        // WRAP_TO_9 (RAM[18])
        // li s3, 512 (Bit 9)
        RAM[18] = 32'h20000993;
        // j LOOP
        RAM[19] = 32'hFC8FF06F;

        // --- ESQUERDA (SW[0]=0) --- (RAM[20])
        // li t2, 512 (Bit 9)
        RAM[20] = 32'h20000393;
        // beq s3, t2, WRAP_TO_0 (Se já está na ponta esq, vai pro bit 0)
        RAM[21] = 32'h00798463; // Pula para RAM[24]
        // slli s3, s3, 1 (Shift Left normal)
        RAM[22] = 32'h00199993;
        // j LOOP
        RAM[23] = 32'hFB8FF06F;

        // WRAP_TO_0 (RAM[24])
        // li s3, 1 (Bit 0)
        RAM[24] = 32'h00100993;
        // j LOOP
        RAM[25] = 32'hFB0FF06F;

    end

    // Leitura Assíncrona
    assign rd = RAM[a[31:2]]; 

    // Escrita Sincrona
    always_ff @(posedge clk) begin
        if (we) RAM[a[31:2]] <= wd;
    end
endmodule