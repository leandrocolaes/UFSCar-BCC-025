#include <iostream>
using namespace std;

class Pedido {
	private:
		string nome;
		int quantidadeItens;
		string* itens;
		static int contadorPedidos;
		static int contadorItens;
		const int ID;

	public:
		Pedido(string name = "unknown", int qntItens = 0):ID(++contadorPedidos){
			nome = name;
			if (qntItens > 0){
				quantidadeItens = qntItens;
				itens = new string[quantidadeItens];
			} else {
				quantidadeItens = 0;
				itens = NULL;
			}
			contadorItens += quantidadeItens;
		}
		~Pedido(){
			contadorPedidos --;
			contadorItens = contadorItens - quantidadeItens;
			delete [] itens;
		}

		int getcontadorPedidos(){
			return contadorPedidos;
		}
		int getcontadorItens(){
			return contadorItens;
		}

		bool setItem(int posicao, string valor){
			if ((posicao > quantidadeItens - 1) || (posicao < 0)) {
				return false;
			} else {
				itens[posicao] = valor;
				return true;
			}
		}
		bool getItem(int posicao, string &valor) const {
			if ((posicao > quantidadeItens - 1) || (posicao < 0)) {
				return false;
			} else {
				valor = itens[posicao];
				return true;
			}
		}

};

int Pedido::contadorPedidos = 0;
int Pedido::contadorItens = 0;


int main (){
	string valor;
	Pedido p1("teste", 2);
	p1.setItem(0, "0");
	p1.setItem(1, "1");
	p1.getItem(1, valor);
	cout << valor << p1.getcontadorPedidos() << p1.getcontadorItens() << endl;

	return 0;
}
