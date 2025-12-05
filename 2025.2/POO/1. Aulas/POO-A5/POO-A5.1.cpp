#include <iostream>
using namespace std;

class vetor {
	private:
		int tamanho;
		int *ptr;
	public:
		vetor(int tam = 10){
			ptr = new int[tam];
			tamanho = tam;
	}
		~vetor(){
			delete [] ptr;
			cout << "destroidor" << endl;
		}
		bool setValor(int posicao, int valor){
			if ((posicao > tamanho -1) || (posicao < tamanho -1)){
				return 0;
			}
			else {
				ptr[posicao] == valor;
				return 1;
			}
			
		}
		bool getValor(int posicao, int &valor) {
			if ((posicao > tamanho - 1) || (posicao < tamanho - 1)){
				return 0;
			} else {
				valor = ptr[posicao];
			}
			
		}
		int getTam(){
			return tamanho;
		}
};

int main (){
	vetor vetorNew;
	cout << vetorNew.setValor(0, 12) << endl << vetorNew.setValor;
}
