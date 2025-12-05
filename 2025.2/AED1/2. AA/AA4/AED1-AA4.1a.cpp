#include <iostream>
#include <string.h>

using namespace std;

struct Node{
	int id;
	string memoria;
	Node* prox; //ponteiro
};

class ll{
private:
	Node* head;
	int size;
public:
	ll(){
		size = 0;
		head = NULL;
	}
	void add_head(string valor, int id) {
		Node* newNode = new Node;
		newNode->prox = head;
		newNode->id = id;
		newNode->memoria = valor;
		head = newNode;
		size++;
	}
	void add_tail(string valor, int id){
		Node* newNode = new Node;
		newNode->id = id;
		newNode->memoria = valor;
		if (head == NULL){
			head = newNode;
		}  else {
			Node* temp = head;
			while (temp->prox != NULL) {
				temp = temp->prox;
			}
			temp->prox = newNode;
		}
		newNode->prox = NULL;
		size++;
	}
	void print(){
		Node* current = head;
		while (current  != NULL){
			cout << current->id << ":" << current->memoria << endl;
			current = current->prox;
		}
	}
	void inverterLista(){
		Node* current = head;
		Node* prev = NULL;
		while(current != NULL){
			Node* temp = current->prox;
			current->prox = prev;
			prev = current;
			current = temp;
		}
		head = prev;
	}
};
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
		void printPilha() const;
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
void Pilha::printPilha() const{
	for (int i = 0; i <= top; i++){
		cout << keys[i] << " ";
	}
}
int main () {
	ll LL1;
	int Id[12]  = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	string Valor[12] = {"vida adulta", "trabalho", "faculdade", "ensino médio", "amizade", "adolescência", "ensino fundamental", "natal", "praia", "infância", "pai", "mãe"};

	for(int i = 0; i < 12; i++){
		LL1.add_head(Valor[i], Id[i]);
	}
	LL1.inverterLista();

	LL1.print();
	return 0;
}
