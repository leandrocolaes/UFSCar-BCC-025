# Arquivo: riscv.asm
.section .text
.global _start

# Definição dos Endereços de Memória (Baseados no top.sv)
.equ IO_BASE,    0x100
.equ ADDR_LEDS,  0x104  # IO_BASE + 4  (addr[2])
.equ ADDR_HEX,   0x108  # IO_BASE + 8  (addr[3])
.equ ADDR_SW,    0x120  # IO_BASE + 32 (addr[5])
.equ RAM_VAR,    0x200  # Endereço na seção .data (RAM)

_start:
    # Inicialização
    li s0, 0            # Zera registrador s0 (usado como acumulador temporário)
    la s1, contador     # Carrega endereço da variável 'contador' na RAM
    
    # Carrega endereços de I/O em registradores para acesso rápido
    li s2, ADDR_SW
    li s3, ADDR_LEDS
    li s4, ADDR_HEX

loop:
    # --- Passo 1: Leitura dos Switches ---
    lw t0, 0(s2)        # Lê o valor dos Switches (0x120)

    # --- Passo 2: Escrita nos LEDs (Feedback visual imediato) ---
    sw t0, 0(s3)        # Escreve o valor lido nos LEDs (0x104)

    # --- Passo 3: Operação na Memória RAM (Prova que a RAM funciona) ---
    lw t1, 0(s1)        # Lê valor atual do contador da RAM (.data)
    addi t1, t1, 1      # Incrementa o contador
    sw t1, 0(s1)        # Salva o novo valor na RAM

    # --- Passo 4: Exibir o contador no HEX ---
    # O contador vai rodar muito rápido na simulação/FPGA.
    # Vamos deslocar bits para ficar legível ou apenas mostrar direto.
    sw t1, 0(s4)        # Escreve o contador nos Displays de 7 Seg (0x108)

    # Loop infinito
    j loop

.section .data
# Variável na memória RAM (inicia em 0x200 conforme o Linker Script)
contador:
    .word 0x00000000