---
type: exercise
date: "2025-11-09"
week: "2025-W46"
tags:
duração:
---
**b)** **ALUop1.** é uma variável  que auxilia o ALUControl a se decidir.
	Caso for 00: é quando acontece lw e sw. A ALU terá que somar.
	01: é para o beq. A ALU terá que subtrair.
	10: é para os demais tipos que a ver pelo f3, f7 qual será a operação.
Agora que a ALU só soma, serão afetados diretamente as instruções especificas que possui a ALUop = 10 e  não fazem adicão: and, or, slt
**c)** **ALUop0**: será afetado o beq que tem a ALUop = 01
**d)** **MemWrite**: Esse sinal quando ativo permite gravar valores na memória. Instruções que salvam valores na memória serão afetadas: lw.
**e) ImmSrc1:** Controla a como o imediato será alterano na extend
	- 00, I-type
	- 01, S-type
	- 10, B-type
	Serão afetados o I-type, e o S-type
**f)ImmSrc0**: Será afetado apenas o S-type, sw
**g) ResultSrc1**
	0, R-type
		1, lw
	Demais instruções não passam pelo [[Multiplexadores]]