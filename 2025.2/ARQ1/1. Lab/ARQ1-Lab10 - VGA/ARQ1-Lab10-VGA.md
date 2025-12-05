---
date: "2025-11-06"
week: "2025-W45"
type: note
duração:
---

[[ARQ1-P2]]
[[RISC-V Assembly Language]]
A resolução real é 640x480 e é mapeada por 20x15 por um quadrado de 32 pixels.
requer 300bytes. 
Tem o formato XXRRGGBB. As cores são limitadas para economia de recursos
	vga_bits = 4. Possui $2^{12}$   . tem que ser 4. No remoto tem ser 1. 
space 300 - 2(20)

Objetivo
	Implementar as operações de 

Precisa do hex 1

No rars no imediato tem que ser multiplo de 4 no lw
lb t0, 0(s0) = ffffffbe. Pega o be e preenche com a extensão de sinal
lbu t1=1(s0) = 000000BA. Preenche com 0 obrigatóriamente

surfe
1. inverte os primeiros 4 bytes

[[ARQ1-Lab10.1]], [[ARQ1-Lab10.2]], [[ARQ1-Lab10.3]]

testes
1. virgem
    ok ? meu 
        /ok ? virgem novamente
            /ok ? relate
    /ok ? processo de conta gotas


![[Pasted image 20251126120118.png]]
![[Pasted image 20251126120219.png]]

![[Pasted image 20251126120428.png]]
![[Pasted image 20251126120501.png]]
