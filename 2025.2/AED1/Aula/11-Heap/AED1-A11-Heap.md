---
date: "2025-12-02"
week: "2025-W49"
type: note
duração:
---
[[AED1]]
**Min-Heap**
*Os códigos são escritos em pseudocódigos
``` C
TAD Node
	int key
	int p
	
TAD MinHeap
	Node array[ann-1] data
	int tail

init(MH){
	MH.tail = 1
}
```
**FUNÇÕES**
```C
//enqueue
enqueue(MH, key, p){
	if MH.total == n-1
		error('overflow')
	else {
		MH.tail += 1
		MH.data[MH.tail].key = key
		MH.data[MH.tail].p = p
		shift_up(MH)
	}
}
```

```c
shitt_up(MH){
	son = MH.tail
	son_p = MH.data[son].p
	parent = floot((son-1)/2)
	parent_p = MH.data[parent].p
	while son > 0 and son_p < parent_p {//maxheap son_p > parent_p
		swap(MH.data[son], MH.data[parent])
		son = parent
		parent = floor((son-1)/2)}
	}	
}
```

```c
dequeue(MH){
	if MH.tail == -1
		error('underflow')
	else {
		key = MH.data[0].key
		swap(MH.data[0], MH.data[MH.tail])
		MH.tail -= 1
		shift_down(MH)
		return key
	}
}
```

```c
shift_down(MH, i){
	parent = i
	parent_p = MH.data[parent].p
	lift = 2*parent + 1
	right = 2*parent + 2
	swallest = parent
	if left << MH.tail and parent.p > MH.data[left].p
		smallest = left;
	if right << MH.tail and MH.data[smallest].p > MH.data[right].p //axheap smalles.p < data
		smallest = right
	if smallest != parent {
		swap(MH.data[parent], MH.data[smallest])
		shiftdown(MH, smallest)
	}
}
```
A recursão será ativada a cada descida da nível da árvore. E a quantidade de nível da árvore é $n\log{2}(n)$ '' 
Max_heap = no ship

**HeapSort**
	1. Construit um max-heap
	2. trocar o L[0] com L[n-1] (maior no final)
	3. Reduzir o tamanho útil de L em 1 unidade
	4. Trazer o maior elemento p/ L[0]
	5. Repetir o processo até a ordenação


```c
heapfly(L,n, i){
	l  = 2*i +1
	r = 2*i +2
	if l <= n and L[i] < L[l]
		largest = l
	if r <= n and L[largest] < L[r]
		largest = r
	if largest != i {nível
		swap(L[i], L[largest])
		heapify(L, n, largest)
	}
}
```
Não basta chamar o heapfly com o primeiro, tem q ver o último nó da folha:  piso(n/2)-1


```c
build_max_heap(L, n){
	for i = (floor(n/2)-1) down to 0
		heapify(L, N, i)
	return L
}
```

```c
heapsort(L, n){
	build_max_heap(L, n)
	for i = n-1 down to 1 {
			swap(L[0], L[i])
			heapify(L, i, o)
	}
}
```
**Complexidade:** $O(n\log_{2}n) + \log(n-1)! = O(n\log_{2}n)$. Utilizando o stirling

verificar se o b é igual a 02