#include <iostream>
using namespace std;

//Implementar uma classe para um RH
//
typedef struct {
	int cpf;
	string name;
} colaborador;


class Empresas {
	private:
		const int ID;
		int numColaboradores;
		colaborador* colaboradores;
		string nome;
		static int numEmpresas;
	public:
		Empresas(int num, string name);
		~Empresas();
		int getColaboradores() const ;
		static int getnumEmpresas();
		int getID() const;
		void setColaborador();
		void setNome();
};

int Empresas::numEmpresas = 0;

Empresas::Empresas(int num = 1, string name = "unknown"):ID(++numEmpresas){
	nome = name;
	numColaboradores = num;
	colaboradores = new colaborador[numColaboradores];
}

Empresas::~Empresas(){
	delete [] colaboradores;
}

int Empresas::getColaboradores() const{
	return numColaboradores;
}

int Empresas::getnumEmpresas() {
	return numEmpresas;
}

int Empresas::getID () const {
	return ID;
}

void setColaborador(int i_colaborador, colaborador c1){
	colaboradores[i_colaborador] = c1;
}

int main (){
	Empresas em1(2, "em1");
	cout << em1.getID() << endl;
}
