---
date: 2025-09-11
week: W37-2025
type: note
---

[[02-decode-game]]
Os testes irão ser  feitos apenas no [[Make]]
Retrospectiva das aulas anteriores
Arquitetura Pipeline: faz mais coisa de uma vez


Ler até a o capitulo 7 [[Digital Design & Computer Architecture RISC-V Edition.pdf]]

[[ARQ-LAB3]]: inverter do minusculo para maisculo só usar as pontas da lista
	buffer: reserva um espaço
	.section: define o local do programa e as váriaves . text: separa o programa
	_strart_: onde o programa começa
	ecall : scanf, (OS: envia apenas o total digitado)
	mv s0, a0 = move os dados para o s0
	li, t3, 'A' e li t3, 'Z': coloca o range  
	ori t2, t2, 0x20: força o bit 5 -> ser minúsculo (maisculo -> minusculo + 32)
	beqz t0, done: critério de parada do loop
	https://github.com/DC-UFSCar/aoc2025s2-string-asm-LeandroColaes

[[ARQ-Lab3]]
	Ensinou como fazer Merge de um Pull Request
	Próxima quinta antes da 10
	Fazer README
	Comentar o Código
	Make só compila uma vez
	Fazer o make para compilar 
	Explicando o main.c:
		.asm: possui caracteres legíveis/imprimíveis -> as -> .o(bin) não executáveis -> ld (linke editor) -> elf (bin) executável -> objdump -> dumbp text -> pega só uma coluna -> .text (o riscv.txt) (usa 1 byte para cada letra)