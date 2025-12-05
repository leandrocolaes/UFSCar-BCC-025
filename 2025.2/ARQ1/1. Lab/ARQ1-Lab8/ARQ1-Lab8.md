---
date: "2025-10-30"
week: "2025-W44"
type: note
duração:
---

[[ARQ1-A7 - Dataph e Multiciclo RISCV]]
[[ARQ1-P2]]

Em asm em rars não pode carregar word com endereço desalinhado ou na mesma memória do texto. RAM[a[31:2]];

Discussão: um lab poderá demorar mais de uma semana, com cada grupo aplicando a sua ideia.

Os LED tem que caminhar do inicio até o fim e voltar

**Dúvidas**:
	Qual endereço o led se ilumina; = 0x0100 LED e 0x120 SW
	Não entendi o que tem que ser feito com o riscv.ld. Como fica a divisão da memória.
 
**Labs futuros:**
	Mostrar em vga e outro com salvar um bit.
	Riscv com vídeo: rodar doom . tutorial do bruno levi.


Novo Lab8
Dos LEDR 0x001 para 0x200 preenchendo todos os leds, depois voltando