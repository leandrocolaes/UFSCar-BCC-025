---
date: 2025-09-23
week: 2025-W39
type: note
duração: 0.8
---
[[POO-P1]], [[C++]], [[PET-BCC]]
código fonte: https://onlinegdb.com/UVZMc9HpT-b
**Construtor:** 
**Static:** variável externa a um objeto
**Const:** não pode ser quantificado, deve ser criada na criação do objeto, colocar "const" na função caso não altere o private e altere o const
**Destruidor:** caso tenha uma alocação dinâmica, eke deve ser usado para retirar

### **Construtor**
```c++
Compra::Compra(int tamanho):id(++n_compras) //o id pega o mesmo valor das N_compras {
	this -> tamanho = tamanho; //this: indica a variavel da classe
	itens = new string(this-> tamanho);
	string pedido;
	
	cout << "Digite os itens da compra" << get_id() << endl;
	for (int i - 0; i < this-> tamanho; i++){
		cout << "Digite o item" < i+1 << ":";
		cin << pedido;
		add_item(i, pedido);
	}
}

```
Cria um vetor de string dinamicamente para começar.
### Destrutor
```c++
Compra::~Compra(){//é acionado quando um objeto é destruido
	delete [] itens; //desaloca memória
}
```
### Outras funções
```c++
int Compra::get_id()const {
	return id;
}

void Compra::add_item(int posicao, string item){
	if (posicao >= tamanho || posicao < 0) {
		cout << "Indice incorreto" << endl;
	}
	this -> itens[posicao] = item;
}
```

### Inicio
```c++
int Compra::n_compras = 0; //a static começa com o valor 0

int main (){

}
```