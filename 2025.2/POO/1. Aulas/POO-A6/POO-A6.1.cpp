#include <iostream>

using namespace std;

class FILA {
	public:
		int maxTam;
		int tam;
		string* fila;
		static int contadorFila;
		static int contadorElementos;
	private:
		FILA(int maxTam);
		~FILA();
		bool add(string elemento);
		bool pop(string* valor);
		static int getTotalFilas();
		static int getTotalElementos();;
};

FILA::contadorFila = 0;
FILA::contadorElementos = 0;

FILA::FILA(int maxTam){
	if (maxTam != 0){
		this -> maxTam == maxTam;
		fila = new vetor[maxTam];
		tam = 0;
		contadorFila++;
		contadorElementos += tam;
	} else {
		fila = NULL;
	}
}
FILA::~FILA(){
	if (maxTam != 0){
		delete [] fila;
		contadorFila--;
		contadorElementos -= tam;
	}
}

bool FILA::add(string elemento){
	if (tam == maxTam){
		return false;
	} else {
		fila[tam-1] == elemento;
		return true;
		tam++;
		contadorElementos++;
	}
}
bool FILA::pop(string* valor){
	if (tam == 0){
		return false;
	} else {
		*valor = fila[0];
	}
}

int FILA::getTotalFilas(){
	return contadorFilas;
}
int FILA::getTotalElementos(){
	return contadorElementos;
}

int main () {
	fila = FILA(10);

	cin << fila.contadorFilas << endl;

}
