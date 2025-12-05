---
date: 2025-09-01
week: W36-2025
type: note
---
[[ARQ1]]
Dúvidas: 
 - [ ] o que é barramento
	1. Um byte para barramento?
		1. Barramento de endereço
 - [ ] Instrução Store: o qual o significado na equação.
 - [ ] Como cada compilador conhece as instruções especificas para cada ISA
1. O que é alinhamento de byte
	- [x] Pq a byte tem q ser múltiplo de bytes, ✅ 2025-09-01
	 - [x] Em C, uma struct tem o tamanho de X bites, o valor vai ser alocado em uma endereço múltiplo de X. Sempre em multiplo de 4 se for em 32 bits ou 8 se for 64 bits. também varia para cada máquina ✅ 2025-09-01
	- [ ] Como é alocado uma variável de 32 bits em um endereço maior que o tamanho do endereço?.
		- [ ] Como usado no exemplo 8 btes para rodar 16, como é utilizado em tempos atuais de 32 ou 64 bites
		- [ ] São alocados um logo após o outro,? Como ele sabe quando acaba?
 - [ ] O que  é offset?
- [ ] Olhar a bibliografia
- [ ] Com executáveis podem rodar em diferente processadores? eles tem um  padrão em comum? 
	- [ ] Diminui a velocidade e a eficiência de um executável ao ser usado em computador diferente
		- [ ] Como que o Gentoo é usado nisso
		- [ ] Como que roda o .sh sem compilar?
- [x] Posso criar um Ind INd por reg, um ponteiro que aponta para um outro ponteiro. ✅ 2025-09-01