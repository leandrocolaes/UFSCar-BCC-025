---
date: 2025-08-28
week: W35-2025
type: note
---
[[ARQ1]]
add t1, t2, t3
addi t1, zero, 42

**memoria ram:** acesso aleatório, consegue pegar todos os dados
	baseado em capacitor, vai perdendo a carga
**memoria cache:**  
	baseado em flip flop como os [[Registradores]]


Como juntar registradores

[[RISC-V]]: vai até 31 registradores

Leitura assíncronal

```verilog
reg[31:0] memory [0:7] // 8 words of  32 bits memory

initial
	$readmemh("../values.tv", memory) //Load initial values from a file

```

**memória rom:** memória só de leitura, não possui clock

Mudar a frequencia e o binário