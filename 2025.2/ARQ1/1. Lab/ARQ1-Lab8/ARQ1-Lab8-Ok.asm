.text	# 0x00000000 rom
	addi t0, zero, 1
	addi s1, zero, 1
vai:
	slli t0, t0, 1
	addi t1, zero, 512
	beq t0, t1, volta
	j vai
	
volta:
	srli t0, t0, 1
	beq t0, s1, vai
	j volta

.data	# 0x00000000 ram
a:	.word 0
b:	.word 1