#include <iostream>

using namespace std;

class figura {
private:
	int y;
	int x;
public:
	figura(int y = 0, int x = 0){
		this->y = y;
		this->x = x;
	}
	virtual ~figura(){}
	void set_y(int valor){
		y = valor;
	}
	void set_x(int valor){
		x = valor;
	}
	int get_y() const{
		return y;
	}
	int get_x() const{
		return x;
	}

	virtual void desenhar() const {
		cout << "figura: " << get_y() << " " << get_x() << endl;
	}
};

class circulo : public figura {
public:
	circulo(int x = 0, int y = 0):figura(x, y){}
	virtual void desenhar() const {
		cout << "circulo: " << get_y() << " " << get_x() << endl;
	}
	virtual ~circulo (){}

};

class triangulo : public figura {
public:
	triangulo(int x = 0, int y = 0):figura(x, y){}
	virtual void desenhar() const {
		cout << "figura: " << get_y() << " " << get_x() << endl;
	}
};

class quadrado: public figura {
public:
	quadrado(int x = 0, int y = 0):figura(x, y){}
	virtual void desenhar() const{
		cout << "quadrado: " << get_y() << "," << get_x() << endl;
	}
};
int main () {
	figura *ptr_f[4] = {new circulo(1, 1), new triangulo, new triangulo, new circulo};

	ptr_f[0]->desenhar();

	return 0;
}
