---
date: "2025-09-22"
week: "2025-W39"
type: note
---
[[Semat025]]

**Tipos**
	**Content-Based:** baseado nas características semelhantes dos itens.
		mais escaláveis, mas não é bom para itens novos
	**User-Based:** Recomenda baseados em usuários parecidos são utilizados. 
		**Fraqueza:** para novos usuário é fraco
	**Popularidade:** ex: top 5 filmes.
		Sem especificação para cada usuário.
**Cambridge Analytics**
	Usando algorítimos de recomendados baseados em grafos para verificar quem estava indeciso politicamente.
**App Vale Bonus**
[[k-NN]]: k-nearest Neighbors. Recomendação baseado em aproximação dos vizinhos. O número. 
	Tentar fazer uma equidade entre os dados. Pode ser utilizado como min-max[0-1], Padrozinação (Z-score) média é igual a 0
	[[Espaço Métrico]]: euclidiana, manhattan (recomendação ficam mais abrangente), cosseno(por vetor, a direção é mais importe), jaccard