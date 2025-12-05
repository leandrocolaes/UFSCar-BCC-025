#include <iostream>

using namespace std;

class Pilha {//implemtnacao do TAD
	private:
		int top; // topo da pilha
		int* keys; //elementos da pilha
		int n; //número de total da pilha
	public:
		Pilha(int list[], int numTotal); //construtor
		~Pilha(); //destruidor
		int pop();
		bool add(int key);
		void print() const;
		int get_top() const;
		int peek() const;
};

Pilha::Pilha(int list[], int numTotal){
	keys = new int[numTotal];
	for (int i = 0; i < numTotal; i++){
		keys[i] = list[i];
	}
	n = numTotal;
	top = n-1;
}
Pilha::~Pilha(){
	delete [] keys;
}
int Pilha::pop(){
	if (top < 0){
		exit(2);
	} else {
		int key = keys[top];
		keys[top] = 0;
		top--;
		return key;
	}
}
bool Pilha::add(int key){
	if (top == n - 1){
		return false;
	} else {
		top++;
		keys[top] = key;
		return true;
	}
}
void Pilha::print() const{
	for (int i = 0; i <= top; i++){
		cout << keys[i] << " ";
	}

	cout << endl;
}
int Pilha::get_top() const{
	return top;
}
int Pilha::peek() const{
	return keys[top];
}

class Fila{
	private:
		int* array;
		int head;
		int tail;
		int size;
		int n;
	public:
		Fila(int lista [], int total);
		~Fila();
		bool is_empty();
		void enqueue(int key);
		int dequeue();
		int get_size() const;
		int peek() const;
		void print() const;
		void set_head(int valor);
		void set_tail(int valor);
};

Fila::Fila(int lista[], int total){
	size = total;
	n = total;
	array = new int[size];
	for (int i = 0; i < size; i++){
		array[i] = lista[i];
	}
	head = 0;
	tail = size - 1;
}
Fila::~Fila(){
	delete [] array;
}

bool Fila::is_empty(){
	if (size == 0){
		return true;
	} else {
		return false;
	}
}

void Fila::enqueue(int key){
	if(size == n){
		exit(2);
	} else {
		if(tail == n-1){
			tail = 0;
		} else {
			tail++;
		}
	}
	array[tail] = key;
	size++;
}

int Fila::dequeue(){
	int key = array[head];
	if(is_empty()){
		exit(2);
	} else {
		
		if(head == n-1){
			head = 0;
		} else {
			head++;
		}
	}
	size--;
	return key;
}
int Fila::get_size() const{
	return size;
}
int Fila::peek() const{
	return array[head];
}
void Fila::set_head(int valor){
	head = valor;
}
void Fila::set_tail(int valor){
	tail = valor;
}
void Fila::print() const{
	Fila copia(array, size);
	copia.set_head(head);
	copia.set_tail(tail);
	while(copia.size != 0){
		cout << copia.dequeue() << " ";
	}
	cout << endl;
}

int main (){
	int f[15] = {1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1};
	int t[15] = {1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1};
	int cont = 0;
	int passo = 0;

	Fila t1(t, 15);
	Pilha f1(f, 15);

	while(!(t1.is_empty())&&(cont <= t1.get_size())){
		if(f1.peek() == t1.peek()){
			t1.dequeue();
			f1.pop();
			cont = 0;
			cout << ++passo << endl;
			f1.print();
		} else{
			int temp = t1.dequeue();
			t1.enqueue(temp);
			cont++;
			cout << ++passo << endl;
			f1.print();
		}	
	}
	f1.print();
	cout << cont << endl;
	return 0;
}
