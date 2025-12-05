---
date: "2025-09-18"
week: "2025-W38"
type: note
---
[[ARQ1]], [[Verilog]], [[RISC-V]], [[Bash]]. [[ULA]], [[Makefile]]
codespaces.new/{usuario}/repositório
**ULA:** usar o script ./run.sh, com README explicando as op com o nome das operações padronizado com o alu.v.

**$monitor** = informa os dados reais dos processos

**Entrega:** 
	ter um script que tenha um run.sh que tem todas as operações válidas da ULA
	Usa dados de outras processadores como o values.tv de outros simulados

**Light RISC-V**
	Usar como referência
	**testbrench:** 
		Possui um $monitor, imprime quando o valor muda de valor, substitui a porta a e b com o do Menotti
			initial \\ $monitor("opcode =%b funct=%b alun1=%h aluin=%h aluOut=%h", opcaode, funct3, aluIn1, aluIn2, aluOut)
	Possui um algoritmo de Fibonacci em .asm
	**design.sv**
		usa o verilog estrutural
		logic [31:0] //memória RAM[0:511] //não entendi. 511 palavras de 31 de tamanho cada
		Usa endereçamento de 32 bits
		leitura  = rd = ram[a[31:2]]. A word é múltiplo de 4
		**riscvmulti** = processador
		datapath
			possui vários módulos declarados
		**ula**
			se basear nela
			Como que gera o alucontrol
				precisa do aluop
		hex -> ok.hex -> 
		.log informa os dados mostrados pelo $monitor
**Makefile**
	all: quando fazer apenas "make" 
	simul: chama o icarus verilog
	Transforma hex para o verilog ler
**RARS**
	Deixar no compact, text at address 0. O programa fica no começo da memória  e o data fica 200(no fpga fica no endereçço 100)
**Verificação**
	fibonacci = se o endereço da memória esta no local certo
	$writememh()
**Trabalho**
	A ula tem 3 entradas e uma saída
	Para cada instrução a ULA será usada ou não
	8 valores
	Fazer a ULA e ter um teste da ULA.
**Dúvidas**
	o que é o estado no $monitor

Outra ref: https://github.com/BrunoLevy/learn-fpga/tree/master/FemtoRV/TUTORIALS/FROM_BLINKER_TO_RISCV
	Pode ir copiando as dependências e trocar pelos nomes exigidos]
	
### Entendendo a ULA Verilog
utilizando o lightriscv como referência.
	(alu) -> aluresult -> (mux2) 


git remote -v
function no verilog é igual ao inline em c1
