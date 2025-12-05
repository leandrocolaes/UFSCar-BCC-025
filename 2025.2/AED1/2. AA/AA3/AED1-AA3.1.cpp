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

int main (){
	int L1[9] = {5, 2, 9, 4, 6, 3, 1, 2, 4};
	int L2[11] = {2, 6, 9, 7, 2, 5, 1, 4, 2, 5, 3};
	int orcamento = 20;
	int comprado = 0;
	int produtoMenor;
	int contador = 0;
	Pilha P1(L1, 9);
	Pilha P2(L2, 11);

	do {
		int item1 = P1.pop();
		int item2 = P2.pop();
		if (item1 >= item2){
			produtoMenor = item2;
			cout << ++contador << " " << produtoMenor << " 2" <<endl;
			P1.add(item1);//preciso adicioar, pois para verificar o menor o iten é perdido
		} else {
			produtoMenor = item1;
			cout << ++contador << " " << produtoMenor << " 1" <<endl;
			P2.add(item2);
		}
		comprado+= produtoMenor;//adicioinando o menor como comprado
		
	} while(comprado < orcamento);

	cout << comprado-produtoMenor << endl << contador - 1 << endl; //preciso retirar o produtomenore e 1 porque o while para só quando o comprado tivesser o preço acima do limite

	return 0;
}
