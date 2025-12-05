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
	Node* get_head(){
		return head;
	}
	void inverterLista_R(Node* current, Node* prev){
		if (current == NULL){
			head = prev;
			return;
		}
		Node* temp = current->prox;
		current->prox = prev;
		prev = current;
		current = temp;
		inverterLista_R(current, prev);


	}
};

int main () {
	ll LL1;
	int Id[12]  = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	string Valor[12] = {"vida adulta", "trabalho", "faculdade", "ensino médio", "amizade", "adolescência", "ensino fundamental", "natal", "praia", "infância", "pai", "mãe"};

	for(int i = 0; i < 12; i++){
		LL1.add_head(Valor[i], Id[i]);
	}
	LL1.inverterLista_R(LL1.get_head(), NULL);

	LL1.print();
	return 0;
}
