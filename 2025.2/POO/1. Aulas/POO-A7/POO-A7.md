---
date: "2025-10-17"
week: "2025-W42"
type: note
duração:
---

[[POO-P2]]
[[Sobrecarga de Operador]]

Multiplicação de sobrecarga

Global 
	f3 = 7 * f1 **Não tem como implementar como membro da classe**
	f3= operator* (7, f1) //globall
	f3 //classe não existe

**Sobrecarga de Operadores**
	Não da para criar novos operadores
	Operadores que não podem ser carregados = {(.), (.*), (::}, {?:}, (sizeof)}*
	Tanto faz colocar implementar dentro da classe ou global, mas de preferência tenha um  padrão.

**Operador Unário(++ e --)**]
```C++
f2 = ++f1 //pre-fixado. Incremenda e depois retorna o f1
	f2 = f1.operator++()//classe
	f2 = operator++(f1)//global
f2 = f1++ //pos-fixado. Retorna o f1 e depois incremenda
	f2 = f1.operatir++(int)
	f2 = operator++(f1, int)
```

```C++
fracao operator++(){//recebe o valor e dps returna
	num = num + den;
	return *this;
}

fracao operator++(int){
	fracao copia(num, den);
	num = num + den;
	return copia;
}

++obj1 = obj2
obj1++ = obj2 //Não existe essa opção
//O mesmo ocorre com o "--"
```