---
date: 2025-09-02
week: W36-2025
type: note
---

[[Programming Language]]
[[ARQ1]]
[[Digital Design & Computer Architecture RISC-V Edition.pdf]]
[[RISC-V]]

## <center>Basics</center>
É uma representação que um humano consegue ler da linguagem de máquina

Exemplo:

``` Assembly
a = b + c
add a, b, c

a = b - c
sub a, b, c
#São declarações equivalêntes
```
O "Add" é um mnemônico e indica qual operação fazer. A operação é feita entre b e c *source operads* e a o destination operand

As variaves a, b e c são operadores e precisam de localização física para retirar o dado binário, podendo ser guardado nos [[Registradores]], memória e na própria instrução guardando pouca informação. Geralmente são guardados nos registradores pela sua velocidade


---

## <center>Mnemônicos</center>
### LOAD
```verilog
1. LOAD rd #imm //endereçamento imediato
2. LOAD rd (mem) //endereçamento direto
3. LOAD rd (reg) //endereçamento indireto por registrador
4. LOAD rd @(reg) //endereçamento indireto por memória
5. LOAD rd reg //endereçamento por registrador
6. LOAD rd 100(reg) //endereçamento deslocado []
```
**rd:** registrador de destino, onde o load irá descarregar o conteúdo. 
1.  Significa que irá guardar no rd uma informação que já está guardada dentro da instrução, chamado imediato. **Endereçamento Imediato
2. Significa que dentro dos () existe o endereço da memória seja direto informando a memória. **Endereçamento Direto**
3. Dentro do **reg** existe o endereçamento de memória. **Endereçamento Indireto por Registrador**
4. Dentro do **reg** existe um endereço de memória que possui o **endereçamento** que ira ser carregador em **rd**
5. Carrega em **rd** o conteúdo do **reg**
6. Semelhante ao **4**, mas o endereçamento é $100 + reg$

### SAVE
```

```

---

## **<center>Códigos Assembly</center>**
### **Adicionar um Imediato(li, addi)**
```Assembly
li t1, 5
addi x6,x0,5
Os dois código são semelhantes
```
**li**: adiciona um imediato no registrador t1
**addi:** adiciona 5 ao x0(registrador número 0 que possui valor 0) e guarda no registrador x6. I-type
**Ex:** 0000000000101 00000 000 00110 0010011

### **Carregar memória(lw)**
```
lw t0 4(s2)

```
**lw:** Load Word. Carrega no registrador t0 os dados da informação localizado no endereço de memória contido no s2 + 4 bytes.
### **Salvar memória(sw)**

```
sw s0, offshore(sp)
```

### **Shift**
### **Jump(jal)**
```
jal rd, offset
```
**rd:** registrador de destino que receberá o endereço retornado
**offset:** imediato que será somado a PC para realizar o jump

PC = PC + offset
PC = memória da instrução + offset

**Comparação(slt, bne)**
#### **slt**
```
slt rd, rs1, rs2
```
Se rs1 < rs2, rd recebe o valor igual a 1, se não é 0
#### **bne** x

```verilog
bne rs1, rs2, label
```
**rs1:** um registrador para a comparação
**rs2:** outro registrador para a comparação
**label:** um endereço de instrução para onde ele vai saltar

**Método:** se rs1 e rs2 forem diferentes ele não ocorre nada e pula para a próxima instrução(PC++). Se **rs1** e **rs1** forem iguais ocorre o salto
****
### Adicionar um Imediato maior que 12bits

---

## **Tipo de Endereçamento**
**Imediato:** O valor do operando é especificado diretamente na instrução
	**Método:** Load #12
**Direta/Absoluta:** Dentro da instrução possui um endereço de memória onde o operante te fato está. 
	**Método** Load (1011)
**Registrador:** A instrução informa o endereço de um registrado que possui um operador que está dentro do registrador
	**Método:** Load R2
**Indireto por Registrador:**  uma instrução possui um endereço para um registrador que possui um endereço para a memória, que ai sim possui o operando
	**Método:** Load (R1)
**Indireto por Memória:** uma instrução possui um endereço de um registrador que possui um endereço para a memória que possui um endereço para um endereço de memória que possui um operador de fato
	**Método:** Load @(R1) 	