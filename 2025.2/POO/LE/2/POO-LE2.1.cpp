#include <iostream>

using namespace std;

class Complexo {
	private:
		double real;
		double imag;
	public:
	Complexo (){
		real =imag = 0;
	}
	Complexo(double R, double I){
	real = R;
	imag = I;
	}
	double get_real() const {
		return real;
	}
	double get_imag() const {
		return imag;
	}
	Complexo operator+(const Complexo& c1) const {
		double r = this->real + c1.get_real();
		double i = this->imag + c1.get_imag();
		Complexo c3(r, i);
		return c3;
	}
	Complexo operator++(int inutil) {
		Complexo copia = *this;
		real++;
		return copia;
	}
	bool operator==(const Complexo& c1){
		if ((real == c1.get_real())&&(imag == c1.get_imag())){
			return true;
		} else {
			return false;
		}
	}
};

ostream &operator<< (ostream &output, const Complexo &c1){
	output << "{" << c1.get_real() << "," << c1.get_imag() << "i}";
	return output;
}

Complexo operator+(int integer, Complexo const &c1){
	Complexo c3(c1.get_real()+integer, c1.get_imag());
	return c3;
}

int main () {
	Complexo A(3,4), B(5,0), C;
	cout << "A = " << A << endl << "B = " << B << endl;
	C = A + B;
	cout << "C = A + B = " << C << endl;
	A = 4.0 + A;
	cout << "A = 4.0 + A = " << A << endl;
	cout << "A++ (incrementa 1 na parte real): " << A++ << endl;
	if(C==A)
		cout << "C e A são iguais"<< endl;
	return 0;
}
