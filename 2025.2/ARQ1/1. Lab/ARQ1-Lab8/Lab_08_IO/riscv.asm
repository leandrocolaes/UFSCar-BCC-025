.text	# 0x00000000

loop:
	addi x5, zero, 260     # x5 = 260 (0x104)

    # 2. Carregar o valor para acender o LED 9 (2^9 = 512) no registrador x6
    addi x6, zero, 512     # x6 = 512 (0x200)

    # 3. Escrever o valor de x6 no endereço apontado por x5
    sw   x6, 0(x5)

	j loop

.data	# 0x00000000 ram
a:	.word 0
b:	.word 1
