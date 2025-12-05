#include <iostream>
#include <string.h>

using namespace std;


struct Node{
	int id;
	string memoria;
	Node* prox; //ponteiro
};


class Pilha {//implemtnacao do TAD
	private:
		int top; // topo da pilha
		Node** keys; //elementos da pilha
		int n; //número de total da pilha
	public:
		Pilha(int numTotal); //construtor
		~Pilha(); //destruidor
		Node* pop();
		void add(Node* newNode);
		void printPilha() const;
};

Pilha::Pilha(int numTotal){
	keys = new Node*[numTotal];
	n = numTotal;
	top = -1;
}
Pilha::~Pilha(){
	delete [] keys;
}
Node* Pilha::pop(){
	if (top < 0){
		exit(2);
	} else {
		Node* key = keys[top];
		keys[top] = NULL;
		top--;
		return key;
	}
}
void Pilha::add(Node* newNode){
	if(top < (n -1)){
		top++;
		keys[top] = newNode;
	}
}
//void Pilha::printPilha() const{
//	for (int i = 0; i <= top; i++){
//		cout << keys[i] << " ";
//	}
//}

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
	void inverterLista_S(){
		Node* current = head;
		Node* prev;
		Pilha p1(12);
		int cont = 0;
		while(current != NULL){
			p1.add(current);
	  		prev = current;
			current = current->prox;
			cont++;
		}
		head = prev;
		for(int i = 0; i < cont; i++){
			current = p1.pop();
			add_tail(current->memoria, current->id);
		}
	}
};
int main () {
	ll LL1;
	int Id[12]  = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	string Valor[12] = {"vida adulta", "trabalho", "faculdade", "ensino médio", "amizade", "adolescência", "ensino fundamental", "natal", "praia", "infância", "pai", "mãe"};

	for(int i = 0; i < 12; i++){
		LL1.add_head(Valor[i], Id[i]);
	}
	LL1.print();	
	LL1.inverterLista_S();
	LL1.print();
	return 0;
}
