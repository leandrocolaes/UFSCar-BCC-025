#include <iostream>

using namespace std;

typedef struct{
	int key;
	int p;
} Node;

class PQ{
	private:
		Node* data;
		int tail;
		int size;
		int n;
	public:
		PQ(int lista[], int tamanho);
		~PQ();
		void enqueue(int key, int p);
		int findMin() const;
		int dequeue();
		int get_size() const;
};

PQ::PQ(int lista[], int tamanho){
	size = 0;
	tail = 0;
	n = tamanho;
	data = new Node[n];
	for (int i = 0; i < n; i++){
		enqueue(lista[i], lista[i]);
	}
}
PQ::~PQ(){
	delete [] data;
}
void PQ::enqueue(int key, int p){
	if (size == n) {
		exit(2);
	}else {
		tail++;
		data[tail-1].key = key;
		data[tail-1].p = p;
		size++;
	}
}
int PQ::dequeue(){
	int pos = findMin();
	int key = data[pos].key;
	if (size == 0){
		exit(2);
	} else {
		for (int i = pos;i < tail; i++){
			data[i].key = data[i+1].key;
			data[i].p = data[i+1].p;
		}
		tail--;
		size--;
	}
	return key;
}
int PQ::findMin() const{
	int index = 0;
	int min = data[index].p;
	for (int i = 0; i < tail; i++){
		if (data[i].p < min){
			min = data[i].p;
			index = i;
		}
	}
	return index;
}
int PQ::get_size() const{
	return size;
}

int main () {
	int custo = 0;
	int custoTotal = 0;
	int N[4] = {4,3,2,6};
	int L[20] = {20, 13, 15, 10, 19, 11, 8, 14, 17, 2, 9, 3, 18, 1, 16, 4, 12, 7, 5, 6};
	PQ l1(L, 20);

	while(l1.get_size() > 1){
		custo = 0;
		custo += l1.dequeue();
		custo += l1.dequeue();
		custoTotal += custo;
		l1.enqueue(custo, custo);
	}
	
	cout << custoTotal << endl;
	return 0;
}
