.text	# 0x00000000 rom
.globl _start
_start:
	addi t0, zero, 1
	addi s1, zero, 1
	addi s2, zero, 4
	addi s3, zero, 0x0000010C
vai:
	slli t0, t0, 1
	addi t1, zero, 512
	addi s2, s2, 4
	sw t0, (s2)
	sw t0, (s3)
	beq t0, t1, volta
	j vai
	
volta:
	srli t0, t0, 1
	beq t0, s1, vai
	addi s2, s2, 4
	sw t0, (s2)
	sw t0, (s3)
	j volta