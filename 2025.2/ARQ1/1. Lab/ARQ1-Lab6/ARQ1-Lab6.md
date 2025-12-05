---
date: "2025-10-09"
week: "2025-W41"
type: note
duração:
---
[[ARQ1-P2]], [[ARQ1-S5]]
> [!NOTE] Frase tema do Lab
> Como assim vocês não aprenderam sozinho em uma faculdade presencial?

Monociclo
	Memórias separadas
	síncrono

//addr = de onde vem

A ROM tem 256 Words: de 0x00 até 0xFF

Lab6
	IO mapeado na memória.
	isIO = addr[8], coloca uma instrução maior para se referir aos IO
	na 2° do programa, ele informa a instrução
	Ideias de Instrução, leds que se iluminam em fila
	addi t0, covo, 1
	vai:
		sw t0, (s1)
		sw t0, t0, 1
		bne t0//Comparar com 200
	volta:
		...
		bne to \\comparar com 1
		J vai

1, 2, 4,  8, 10, 20, 40, 80, 100, 200

make -f ../Makefile sim

### Aplicação
Etapas e verificação:
	1. Simular o .asm [[rars1_6.jar]]
		1. Colocar no ROM
	2. Simular no processador
		1. Adicionar um multiplexador em série com o *IsJump* para definir o valor do [[ULA]]
	3. Programar na placa
