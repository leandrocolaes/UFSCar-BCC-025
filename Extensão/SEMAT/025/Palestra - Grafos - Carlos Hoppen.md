---
date: "2025-09-22"
week: "2025-W39"
type: note
---
[[Semat025]]

Caminho mínimo é usado em Redes Viária
grafo com peso
 **Clusterização de dados**
	classificação de grupos, 
	análise de clusters é o estudo de método e algorítimo para agrupar e segmentar objetos com características
	Quando menor os pontos médios, distância pequenas: objetos semelhantes. Algoritmo keinim, das médias, k-means(termina após um número finito de passos)
		Exemplo: 1  precisa ser mais de uma vez
		**Exemplo 2:** usa o agrupamento e separa por cores, simplificando as imagens
		**Exemplo 3:** visualiza as limitações do método como circulos
			Pode ser usado algorítimo espectral(Ng. JOrdan and Weiss). Usa-se matrize e vetores

**[[Matrizes]]**
	Matriz laplaciana
		A quantidade de componente é igual a multiplicidade do autovalor 0 da matriz laplaciana
		É bipartido se é simétrico usando a adjacência 
	Matriz são inversas, pode calcular o espectro -???- 
	**Autovalores e autovetores**
	Eliminação gaussiana: número de passos O(n²)
	Decomposição arbórea: cada nó possui uma bolsa(contagem de caminhos) que é formando por vértices, Melhor se tiver bolsas pequenas. 
		Faço um método semelhante ao escalonamento, mas dando preferência para a mesma bolsa. Será escalonada em (k²n). O problema pode ocorrer com cancelamento acidantal( quando o pivo = 0). A pesquisa do Carlos é sobre isso.
	Para resolver problemas com grafo  pode ser resolvidos por matrizes e vice-versa
[[Isomorfismo]]
	isomorfismo tem O (2^((log n )^c)). Para uma constante absoluto maior que 1 Babai 2017
	Dois grafos são isomorfos, então G e H tem o mesmo espectro(tirando as árvores)
	Se tiverem o mesmo espectro então é isomorfos

**SBMAC**
	Encontro Regional de Matemática Aplicada e Computacional
	Possui livros gratuitos usado em minicursos.