.text
.globl _start

_start:
    li s0, 0x104
    li s1, 0x120
    li t0, 0x001
	li t1, 0x200
	li t2, 0x3ff
	li t4, 0x001

	sw t0, 0(s0)
enche:
	slli t0, t0, 1
	addi t0, t0, 1
	sw t0, 0(s0)
	bne t0, t2, enche

nao_enche:
    lw t3, 0(s1)
	bgt t3, zero, volta
	j nao_enche

volta:                
    srli t0, t0, 1
    sw t0, 0(s0)    
	bne t0, t4, volta    
		
nao_volta:
	lw t3, 0(s1)
	bgt t3, zero, enche
	j nao_volta
