---
date: "2025-12-05"
week: "2025-W49"
type: note
duração:
---
[[POO-P3]]
[[Templates]]
**Templates**

```C++
tmeplate <typename Tgenerico>

Tgenerico Maior (Tgenerico x, Tgenerito y){
	if (x > y)
		return x;
	else
		return y:
}
```
O **Tgenerico** permite que a função seja usado para diferentes tipos de saída.

ou o tipo de um parâmetro

```c++
template <class T>

void printArray(const T* array; const int count)
```

[[Sobrecarga de Operador]]
As operações tem que ser similares

**Classe**
Se a classe pode ser feita sem definir direto podemos usar o template de forma semelhante com a mudança dos parâmetros

```c++ 
Stack <int> insStack //Pilha de inteiro 
```
**Tratamentos de Excessão**
	**Try:**
		possui código que pode provocar exceção
	**Catch**
		Tratará os erros
		Reporta e registra(log)
Cada class pode tratar diferente para cada classe
Uso da classe exception