---
date: "2025-11-27"
week: "2025-W48"
type: note
duração:
---
[[ARQ1]]
 
1. Editar o riscvpipeline.sv e não no ./test/
2. Editar o readme
3. Os nomes são representados pelo meio que ela esta FD(getch e decode)
4. Resolver hazards, adicionar no mesmo ciclo. Ler e escrever no mesmo ciclo
5. Fazer Stall(congelamento), flush(limpar)
6. Usar como referêcia o código do LEvi. O padrão está no passo 4 e devemos chegar até o passo 6 d o Levi. 
	1. pipeline6: Verifica se o valor do registrador é igual ao registrador necessário para pegar a memoria, então escreve os dados no registrador.
	2. pipeline5
	3. pipeline4
7. l45 onde será usado para verificar o hazards