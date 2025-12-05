---
date: 2025-09-04
week: W36-2025
type: note
---
[[ARQ1]]

[[Load - Function]] = [[Memoria de Dados]] -> [[Registradores]]
[[Store - Function]] = [[Registradores]]-> [[Memória de Dados]]

[[ULA]] = calcula o endereço

**Modelo de Hardware:**
	Harvard = o programa não pode ser alterada, a memória só pode ser lida.

**Tarefa da Semana:** - 1 seman
	Saber reconhecer opcode de uma função
	Todas as jogadas tem que ser informadas em binário
	Um [[upcode]] tem q terminar em 11, **usar os upcodo do link2**
		Ex: 0100011 = store
		usar branch, semelhante ao jump, mas condicional
		JAL = jump
		OP = Instruções R
		Load imediate
			Pega metade do dados e outra instrução pega outra metade
		O que é um **imediato**? 
		Olhar os tipos do upcode
		O registrador de destino fica no binário 11 a 7
	**Link 2**: ensina a fazer instruções do [[RISC-V Assembly Language]] no [[fpga]]
		System: imprimir na tela
		Segment Fault: o OS expulsa a tentativa de pegar uma memória indevida
	Copiar o código do github para o [[rars]]
		.data (para colocar quando for mexer com a memória)
		a:  //1 = a, 2 = a+4, 3 = a + 8
		.word: grava valores em 32 bits: .word 1,2,3,4,OxCAFEBABE
		.text (colocar antes do código)
		li tl, oxDEADBEEF
			gera duas instruções em assembly
		ti tl, 1. li  = load imediate
		la a0, a
		lw t0, 16(a0) // t0 = CAFEBABE
		1. Pegar as instruções e enviar para o site
	Após fazer o código de 6 pontos que é adivinhar o upcode, tenta advinhar o que é cada instrução
			
Break point: fazer debug de programa
		