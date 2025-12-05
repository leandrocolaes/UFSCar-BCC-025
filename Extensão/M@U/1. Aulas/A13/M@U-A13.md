---
date: "2025-11-17"
week: "2025-W47"
type: note
duração:
---
[[Grafo Ponderado]], [[Grafos]]
Falou a definição de grafos: [[Grafo Ponderado]]
**Tipos de dados**
**Lista de Aresta:**  Não precisa se preocupar com complexidade
**Matriz de Adjacência:**
	Aumenta a eficiência: não precisar olhar todos
	Pode ter $O(n^2)$
**Lista de Adjacência:** Mais eficiência
	Mais econômico em questão de busca de aresta por vértice, mas perde em questão de procura de vértice,  a complexidade aumenta. O(m+n)

vector : [[Lista Encadeadas]]
``` C++
vector<vector<t>> lista_adj(V); //Vetor de vetor do tipo t;
```
Toda [[árvore]] é um grafo

[[BFS]]
Busca em largura:
Algoritmo:
	Adiciona todos os vértices adjacentes e  verifica os vértices adjacentes
	Sempre retorno o caminho mais curso
	Da prioridade por níveis1


auto 

[[DFS]]
	Economiza memória
	O primeiro caminho não é necessariamente o mais rápido