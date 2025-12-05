#include <iostream>
using namespace std;



class FRACAO {
	private:
		int num;
		int den;
	public:
		FRACAO(int n, int d);
		~FRACAO();
		int get_num() const;
		int get_den() const;
		void set_num(int valor);
		void set_den(int valor);
};

FRACAO::FRACAO(int n = 0, int d = 0){
	num = n;
	den = d;
}
FRACAO::~FRACAO(){
}
int FRACAO::get_num() const {
	return num;
}
int FRACAO::get_den() const {
	return den;
}
void FRACAO::set_den(int valor){
	den = valor;
}
void FRACAO::set_num(int valor){
	num = valor;
}

FRACAO mult (FRACAO f1, FRACAO f2){
	return f3 = FRACAO(f1.get_num()*f2.get_num(), f1.get_den()*f2.get_den());

}

int main () {
	
}
