---
date: "2025-10-10"
week: "2025-W41"
type: note
duração:
---

[[POO-P2]]
Revisão da [[POO-P1]]
criação do diagrama e código
códigos criado na aula: [[POO-A6.1.cpp]], a resposta da prova será passada posteriormente

| FIla      |                            |     |
| --------- | -------------------------- | --- |
| *Private* |                            |     |
|           | string* fila               |     |
|           | int head                   |     |
|           | int tail                   |     |
|           | int maxTamanho             |     |
|           | int tamanho                |     |
|           | static int totalFilas      |     |
|           | static int totalItens      |     |
| *Public*  |                            |     |
|           | FILA(int maxTamanho)       |     |
|           | ~FILA                      |     |
|           | int getHead() const        |     |
|           | int getTail() const        |     |
|           | int get maxTamanho() const |     |
|           | int getTotalFilas()        |     |
|           | int getTotalItens()        |     |
|           | bool add(string item)      |     |
|           | bool pop()                 |     |
|           |                            |     |
|           |                            |     |
[[Sobrecarga de Operador]]
	Mesmo caracteres para mais de uma função(assinatura diferentes)
	Usar os objetos da classe com operadores(* ou <<) sobrecarregados

**Construtor de Cópia**
	Cria uma cópia do objeto
	Um objeto/variável como valor de uma parâmetro, o objeto copia a entrada 
	Geralmente o construtor de cópia gerado pelo compilador é uma cópia rasa
		**Ex:** quando é copiado uma fração. A cópia copia o ponteiro também da original
	Copia profunda é usado quando existe ponteiros
		**** 
```C++
	nome_class(const nome_clas & objCopiado);
	
	nome_class(const nome_clas & objCopiado) {
		this-> tam= objcopiado.tam;
		this -> valores = new int [tam];
		
		for (int i = 0; i < tam; i++)
			this -> valores[i] = objcopiado.valores[i]
	}
```
