#include <iostream>

using namespace std;

class funcionario {
private:
	string nome;
	int codigo;
	float salario;
public:
	funcionario(string nome, int codigo, float salario){
		this->nome = nome;
		this->codigo = codigo;
		this->salario = salario;
	}
	float remuneracao(){
		return salario;
	}
};

class gerente: public funcionario {
private:
	int num_pessoas;
public:
	gerente(string nome, int codigo, float salario, int num_pessoas):funcionario(nome, codigo, salario){
		this->num_pessoas = num_pessoas;
	}
	float remuneracao(){
		return funcionario::remuneracao()*(1+num_pessoas*0.01);
	}
};

int main () {
	funcionario f1("f1", 1, 1500.00);
	gerente g1("g1", 2, 2000, 10);

	cout << f1.remuneracao() << endl;
	cout << g1.remuneracao() << endl;
	return 0;
}
