---
date: 2025-09-05
week: W36-2025
type: note
---
[[POO-P1]]
[[POO-A3.2.cpp]]
[[POO-A3.1.cpp]]
A escolha do C++ é devido que é próximo de C que aprendemos no 1̣° Semestre.
C++ possui mais conteúdos


```C++
using namespace std;
//agrupamento de espaço que pode definidir identificadores: nomes de vaŕiaves e funções
//std é a biblioteca padrão do c++, contém cin e cout
//Ambientes de Nome
```
Não é recomendado usar a biblioteca std porque é muito grande e quase não se utiliza tudo.
```C++
using std::cout << "text"; //não precisa usar pegar a biblioteca std
```
Define: antes de compilar ele colocar a v[ariavel definida nos locares

**Operador de Escopo**
``` C++
::x //referêcia a variavel global
```

cout e cin são objetos, não sendo necessário informar o tipo de dados, ideal para a criação de objetos sem precisar especificar a cada objeto.

``` C++
#include <iostream> //perimte o uso de cout e cin
```

**Classe de Armazenamento Static**
	O especificador static faz a váriavel ter o  mesmo valor
**Const**
	Para declarar um valor constante usa-se o const para declarar objetos constantes.

**Valores Defaul**
	Consegue definir métodos padrão
```C++
int my function (int x = 1, int y = 2)
```
	Consigo usar a função sem informar os parâmetros
``` C++
void zera(int& valor) //só informa que é passagem por referência
```

**Class**
	Ao invés de struct usasse **class**, por default o objeto é privado
	**Construtor**: geralmente se inicia alguma coisa , não tem retorno
		Não pode ter dois métodos iguais
	Posso utilizar o **#include horario.h** para pegar a classe feita e horario::horario() para pegar a função construtora ou void horario::sethorario paa pegar um  
```C++
	class nome {
		public:
			horario()
			declarações de funções;
		
		private:
			variaveis;
	};
	
	nome n1() //posso declarar o 
	n1.função // 
```

A classe está incompleta [[POO-A3.1.cpp]], pois não possui métodos **GET** e **SET** para pegar variáveis privadas

**Destrutor:** faz uma ação antes de destruir uma construtor
	~horario()