---
date: "2025-10-07"
week: "2025-W41"
type: note
duração:
---
[[ARQ1-P2]]
[[ARQ1-SD5-Monociclo.pdf]]
Sera tentado a construir um processador simplificado com a Arquitetura Harvard que terá acesso comandos de acesso a memória: lw e sw
Instrução para a ALU, add, sub, or, slt
e controle do pc: beq e jal

Separado em 3 passos:
	**Fetch**: acessar o endereço da memória para a próxima instrução // não entendi
	**Decode:** conseguir ler os registradores
	**Execute:** Executar a instrução

**Componentes:**
	PC
	Memória para as instruções
	Memória para os dados
	ULA
	Registradores

**Unidade de Controle**
	//Onde ela está?
	Faz o controle dos dados dos componentes controlando diretamente os multiplexadores e componentes do processador gerado pelos bits do opcode da instrução

Para o calculo a ULA não é usada sempre

### Datapath jal
### Variáveis da Unidades de Controle
