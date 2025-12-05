#include <iostream>

using namespace std;

struct Node {
	int id;
	Node* prev;
	Node* prox;
};

class dll{
private:
	Node* head;
	Node* tail;
	int size;
public:
	dll(){
		size = 0;
		head = NULL;
		tail = NULL;
	}
	void add_head(int id){
		Node* temp = new Node;
		temp->id = id;
		if (head == NULL){
			head = temp;
			tail = temp;
			temp->prox = tail;
			temp->prev = head;
		} else {
			temp->prox = head;
			head->prev = temp;
			head = temp;
			tail->prox = head;
			head->prev = tail;
		}
		temp->prev = tail;
		size++;
	}
	void print(){
		Node* current = head;
		while(current != tail){
			cout << current->id << endl;
			current = current->prox;
		}
		cout << tail->id << endl;
	}
	void reorganizarLista(){
		if (head == NULL || size < 2) return;

        Node* current = head;
        int count = 0;

        while(count < size){
            Node* nextNode = current->prox; 

            if (current->id % 2 != 0 && current != head){

                current->prev->prox = current->prox;
                current->prox->prev = current->prev;

                if (current == tail){
                    tail = current->prev;
                }

                current->prox = head;
                current->prev = tail;

                head->prev = current;
                tail->prox = current;

                head = current;
            }

            current = nextNode;
            count++;
        }
    }	
};


int main() {
	int cavaleiros[8] = {9, 6, 5, 8, 7, 2, 3, 4};
	dll dll1;
	for (int i = 0; i < 8; i++){
		dll1.add_head(cavaleiros[i]);
	}
	dll1.reorganizarLista();
	dll1.print();
	return 0;
}
