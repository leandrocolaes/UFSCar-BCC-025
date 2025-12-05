#include <iostream>

using namespace std;

class fracao {
private:
	int den;
	int num;
public:
	fracao(int, int);
	void set_den(int);
	void set_num(int);
	int get_den() const;
	int get_num() const;
	void print();
	fracao operator*(int integer) const;
	fracao operator*(const fracao& f1) const;
	bool operator>(int integer) const;
	fracao operator++(int inutil);
};

fracao::fracao(int a = 0, int b = 0){
	num = a;
	den = b;
}
void fracao::set_den(int valor){
	den = valor;
}
void fracao::set_num(int valor){
	num = valor;
}
int fracao::get_den() const{
	return den;
}
int fracao::get_num() const{
	return num;
}
void fracao::print(){
	cout << get_num() << "/" << get_den() << endl;
}

fracao operator+(int integer, fracao f1){
	f1.set_num(f1.get_den()*integer+f1.get_num());
	return f1;
}

fracao operator+(fracao f1, int integer){
	return integer + f1;
}
fracao operator-(fracao f1, int integer){
	return (-integer) + f1;
}
fracao operator-(int integer, fracao f1){
	f1.set_num(f1.get_den()*integer - f1.get_num());
	return f1;
}
fracao fracao::operator*(int integer) const{
	fracao f3;
	f3.set_num(this->num*integer);
	f3.set_den(this->den);
	return f3;
}
fracao fracao::operator*(const fracao&f1) const {
	fracao f3;
	f3.set_num(this->num*f1.get_num());
	f3.set_den(this->den*f1.get_den());
	return f3;
}
fracao operator*(int integer, const fracao & f3) {
	return f3*integer;
}
bool fracao::operator>(int integer) const{
	float função = get_num()/get_den();
	float inteiro = integer/1.00;
	return (função > inteiro);
}

fracao operator++(fracao&f1){
	f1.set_num(f1.get_num()+f1.get_den());
	return f1;
}
fracao fracao::operator++(int inutil){
	fracao temp = *this;
	num += den;
	return temp;
}

ostream &operator<<(ostream &output, const fracao& f1){
	output << f1.get_num() << "/" << f1.get_den() << endl;
	return output;
}
istream &operator>>(istream &input, fracao& f1){
	int numerador, denominador;
	input >> numerador;
	input.ignore();
	input >> denominador;
	f1.set_num(numerador);
	f1.set_den(denominador);

	return input;
}

int main () {
	fracao f1(1, 2);
	fracao f2(2, 3);
	fracao f3;
	f2++;
	f2.print();
	cout << ++f2 << endl;
	cin >> f3;
	cout << f3;
}
