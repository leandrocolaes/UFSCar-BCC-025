---
date: "2025-10-13"
week: "2025-W42"
type: note
duração:
---
## Aula:
[[ARQ1-P2]]
Cada Instrução tem pequenos ciclos. Diferentes tipos de instrução possui diferentes tipos e quantidade de ciclos.
Devido a divisão de ciclos é possível reaproveitar unidades([[ULA]] e [[Multiplexadores]])

**Unidades**
	Possui uma única memória: Von 
	[[PC]]
	Banco de [[Registradores]]
	Registrador de Instrução:
		Para guardar a instrução da memória para caso o PC mudar  a instrução não se perca e o PC para a instrução back
	Registrador de Dados
		Dados de uma load store, por exemplo
	[[Multiplexador]]
	[[ULA]]
	[[Unidade de Controle]]

**Datapath**
	PC -> Mux ->  

Ler o capítulo 7 do [[Digital Design & Computer Architecture RISC-V Edition.pdf]]

**Dúvidas**
	Porque deve existir o Registrador de Instrução, Registrador de Dados
	Como é possível fazer o l

**0 - Fetch**
	IR = Mem[A]
	PC = PC + 4
**1 - Decode**
	REG[A1] = A
	REG[A2] = A
	imm -> Ext
**2 - Execute**
	ULA <- A + imm(extentida)
**3 - Memória**
	O resultado da ULA chega nos reg da mem e da memória
**4 - Registrador**
	Será armazenado no banco de registradores no A3
	Reg[A3] = dado do reg de dados


## Baseando-se no 
**Diferenças Entre Multiciclo e único ciclo**
[[ARQ1-A6 - Construiindo um datapath e controle RISC-V]]
	Multiciclo será repartido em pequenos passos, sendo a memória, [[ULA]], e o [[Registradores]] por demorarem mais, não podem estar no mesmo passo.
	Usasse apenas uma memória porque a instrução é lida no primeiro passo e depois o dado é lido ou é escrito. Uma única [[ULA]], que sera utilizada para diferentes propósitos.
	Diferentes instruções terão diferentes passos e tempo de execução diferentes
	[[Unidade de Controle]] produz diferentes sinais de controle para cada passo.

## **Datapath Multiciclo**
Segue alguns datapath para as instruções lw e sw
### **lw**
Construindo um datapath para a instrução
		1. **Fetch** Terá que conter um IR para armazenar a instrução quando o <u>IRWrite</u> for ativo.
		Depois de fetching o **lw**, o binário rs1 é conectado a A1 do banco de registradores, levando para RD1 que será armazenado no <span style="background:#fff88f">nonarchitectural register</span>, segura valores intermediários.
		 ![[Pasted image 20251015153205.png]]
			6. Nesse meio tempo o PC terá que ser atualizado para mais 4. Essa etapa é boa porque a [[ULA]] não será usada. Para poder selecionar qual entrada deve ser contida na [[ULA]], devemos ter a entrada de [[Multiplexadores]] para cada entrada e o *PCWrite* ativo. Como o registrador do endereço da memória que o rd será carregado está desligado é possível fazer um bypass
			 ![[Pasted image 20251015154257.png]]
		2. O tipo L possui imediatos de 12 bits que serão estendidos para 32 bits(immText), por isso a unidade
		3. O endereço que será carregado no rd será,  rs1+offset, por isso será usado a [[ULA]], assim ocorrerá uma soma entre rs1 e o immText. Para tal o ALUControl será 000 e o resultado, ALUResult, será armazenado no registrador ALUOut.
		![[Pasted image 20251015145433.png]]
		4. Na entrada da memória terá um [[Multiplexadores]], AdrSrc, que decidira se irá passar o PC ou o AluOut<span style="background:#fff88f">(o que é Adr que foi citado</span>) e o Dado é lido para um registrador a parte.
		![[Pasted image 20251015151407.png]]
		5. O dado é enviado para um multiplexador na saída do ALUOut que enviará para o banco de registrador na entrada WD3, essa volta toda é criada, pois esse caminho já teria que ser utilizado por outras instruções, ao invés de criar outro caminho já percorrer um existente. 
			1. Com o registrador de destino informado pelo *IR* e  o RegWrite com sinal 1 para ser atualizado
		 ![[Pasted image 20251015151851.png]]
	**sw**
### Máquina de Estado
A [[Unidade de Controle]], utilizará dos estados da máquina que inicialmente são alterados a cada clock.
1. **F<span style="background:#fff88f">etch**</span>
	1. Na fase o *AdrSrc = 0* para o PC seja selecionado enviado para o endereço de memória.
	2. A instrução é guardada no registradord de instrução IR pelo IRWrite e escrito no OldPC
	3. Também é utilizado para incrementar o PC+4. Com o *ALUSrcA = 0 e ALUSrcB = 10 e ALUOp = 0 e ResultScr = 10* para não esperar o clock 
2. **Decode**
	1. A [[Unidade de Controle]] decodifica a instrução(estudar mais o [[ARQ1-A6 - Construiindo um datapath e controle RISC-V]]), colocando os valores nos rs1 e rs2 no A e WriteData.
3. **MemAdr**
	1. Para o caso do lw, o *ALUSrcA* tem o valor 10 para que o valor de A seja somado, *ALUOp* como *immSrc*, *ALUSrcB*.
4. MemRead
	1. Como *ResultScr = 0* e *AdrSrc = 0*, permite o *ALUOut* passar até a memória de instrução e levando os dados da memória para o Registrador de Dados
5. MemWB
	1. Agora o *ResultScr = 1* para que o Data do Registrador passa por ele e chegue nos registradores. Com o *RegWrite = 1* o rd(A3) e os dados(WD3) entram e são armazenados.

### Variáveis da Unidade de Controle
**IRWrite:** Usado para guardar a instrução e PC, ocore no estado de FETCH
**ImmSrc**: Define como o extensor de imediato deve ser usado para cada tipo de  instrução 
**ALUControl:** Controla as operações da ULA, 
	000: soma
**AdrSrc**: Controla as entradas do Multiplex Adr para a entrada A da Memory
	00: PC
	01: ALUResult. Usado no lw
**ResultSrc:** Controla a entrada do Multiplexador a saída
	00: ALUout. Para as operações normais
	01: Data. Para o *Data* ser salvo no *Registrador File* com a entrada *WD3*
**RegWrite:** Permite que os dados contidos no *WD3* sejam salvos nos registradores. Usado no *lw*
**ALUSrcA:** Controla a entrada do *Multiplexador A* da primeira entrada da *ULA*
	00: *OldPC*
	01: 
	10:  valor de rs1
**ALUSrcB:** Controla a entrada do *Multiplexador B* da segunda entrada da ULA.
	00: 
	01: *ImmExt*
	10: 4, que será somado com o *OldPC*
**PCWrite**: Permite que o PC seja escrito, ou atualizado
### **Wires**
**PC:** 
	**Objetivo:** define a ordem das instruções
	**Saída:** PC
	**Entrada:** Entrada A da Memoria
**Instr**
	**Objetivo:** a instrução que será executada e codificada
	**Saída:** Registrador de Instrução
	**Entrada:** Register File ou/e Extend
**ImmExt**
	**Objetivo:** imediato após ser realocado, pronto para uso
	**Saída:** Extend
	**Entrada:** ULA
**ALUResult**
	**Objetivo:** Resultado da ULA
	**Saída:** ULA
	**Entrada:** Registrador da ULA, Multiplex de Result
**ALUOut**
	**Objetivo:** Após uma subida do clock, na etapa de Write ele será utilizadado
	**Saída:** Registrador da ULA.
	**Entrada:** Multiplex de Result
**Data**
	**Objetivo:** Dados da memória selecionado que será carregado em um registrador  quando*RegWrite* esta ativo
	**Saída:** Registrador de Dados.
	**Entrada:** *Multiplexador de Result*
**SrcA**
	**Objetivo:** Será usado para realizar a operação na *ULA*
	**Saída:** *Multplexador A*
	**Entrada:** *ULA*
**SrcB**
	**Objetivo:** Será usado para realizar a operação na *ULA*
	**Saída:** *Multplexador B*
	**Entrada:** *ULA*