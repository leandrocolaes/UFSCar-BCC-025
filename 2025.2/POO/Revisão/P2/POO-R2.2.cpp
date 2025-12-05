#include <iostream>

using namespace std;

class Ponto2D {
private:
	int x;
	int y;
public:
	Ponto2D() {
		x = 0;
		y = 0;
	}
	Ponto2D(int vx, int vy) {
		x = vx;
		y = vy;
	}
	int get_x() const{
		return x;
	}
	int get_y() const{
		return y;
	}
	void set_x(int valor){
		x = valor;
	}
	void set_y(int valor){
		y = valor;
	}
	Ponto2D operator++(){
		x++;
		y++;
		return *this;
	}
	Ponto2D operator++(int inutil){
		Ponto2D copia = *this;
		x++;
		y++;
		return copia;
	}

};

class Ponto3D : public Ponto2D {
private:
	int z;
public:
	Ponto3D(int vx = 0, int vy = 0, int vz = 0): Ponto2D(vx, vy) {
		z = vz;
	}
	int get_z() const{
		return z;
	}
	Ponto3D operator++(){
		set_x(get_x()+1);
		set_y(get_y()+1);
		z++;
		return *this;
	}
	Ponto3D operator++(int inutil){
		Ponto3D copia = *this;
		set_x(get_x()+1);
		set_x(get_y()+1);
		z++;
		return copia;
	}
};
	ostream &operator<<(ostream& output, const Ponto2D &p1){
		output << "(" << p1.get_x() << ", " << p1.get_y() << ")";
		return output;
	}
	ostream &operator<<(ostream& output, const Ponto3D &p1) {
		output << "(" << p1.get_x() << ", " << p1.get_y() << ", " << p1.get_z() << ")";
		return output;
}
int main () {
	Ponto2D p1(1, 1), p2(3,4), p3;
	Ponto3D p4(1, 2, 3);

	cout << p1 << endl;
	cout << ++p4 << endl;
	cout << p2++ << endl;
	//cout << ++p4 << endl;

	return 0;
}
