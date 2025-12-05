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
		FRACAO operator*(FRACAO f1) const;
		FRACAO operator*(int k) const;
};

FRACAO::FRACAO(int n = 0, int d = 0){
	num = n;
	den = d;
}
FRACAO::~FRACAO(){
}
int FRACAO::get_num()const {
	return num;
}
int FRACAO::get_den()const {
	return den;
}
void FRACAO::set_den(int valor){
	den = valor;
}
void FRACAO::set_num(int valor){
	num = valor;
}

FRACAO FRACAO::operator*(FRACAO f1) const {//sobrecarga de operador *, fracao por fracao
	FRACAO f3(num * f1.get_num(),den * f1.get_den());
	return f3;

}
//FRACAO operator*(FRACAO f1, int k) {
//	FRACAO f3(k * f1.get_num(),f1.get_den());
//	return f3;
//}
FRACAO FRACAO::operator*(int k) const {
	FRACAO f3(k * num, den);
	return f3;	
}
FRACAO operator*(int k, FRACAO f1) {
	FRACAO f3(k * f1.get_num(),f1.get_den());
	return f3;
}
FRACAO operator++(FRACAO f1){ //incrementa o objeto e dpois retorna
	FRACAO f3(1 + f1.get_num(), f1.get_den());
	return f3;
}
FRACAO operator++(FRACAO f1, int){
	FRACAO f3(1 + f1.get_num(), f1.get_den());
	return f3;

}

FRACAO mult (FRACAO f1, FRACAO f2){
	FRACAO f3(f1.get_num()*f2.get_num(), f1.get_den()*f2.get_den());
	return f3;

}

int main () {
	FRACAO f1(1, 4);
	FRACAO f2(1, 2);
	FRACAO f3 = f1++;
	cout << f3.get_num() << endl << f3.get_den() << endl;
}
