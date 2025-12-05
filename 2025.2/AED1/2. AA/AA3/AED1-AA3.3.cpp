#include <iostream>

using namespace std;

class Deque{
	private:
		int* keys;
		int start;
		int end;
		int size;
		int n;
	public:
		Deque(int tamanho);
		~Deque();
		bool is_full() const;
		bool is_empty() const;
		void add_start(int key);
		void add_end(int key);
		int remove_start();
		int remove_end();
		int get_end() const;
		int peek_end() const;
};

Deque::Deque(int tamanho){
	start = 0;
	end = 0;
	size = 0;
	n = tamanho;
	keys = new int[tamanho];

}
Deque::~Deque(){
	delete [] keys;
}
bool Deque::is_full() const {
	return (size == n);
}
bool Deque::is_empty() const {
	return (size == 0);
}
void Deque::add_start(int key) {
	if (is_full()){
		exit(2);
	} else {
		if (is_empty()){
			start = 0;
			end = 0;
		} else {
			if (start == 0){
				start = n-1;
			} else {
				start -= 1;
			}
		}
		keys[start] = key;
		size += 1;
	}
}
void Deque::add_end(int key) {
	if (is_full()){
		exit(2);
	} else {
		if (is_empty()){
			start = 0;
			end = 0;
		} else {
			if (end == n-1){
				end = 0;
			} else {
				end += 1;
			}
		}
		keys[end] = key;
		size += 1;
	}
}
int Deque::remove_start(){
	if (is_empty()){
		exit(2);
	} else {
		int key = keys[start];
		keys[start] = 0;
		if (start == end){
			start = 0;
			end = 0;
		} else {
			if (start == n-1){
				start = 0;
			} else {
				start += 1;
			}
		}
		size -= 1;
		return key;
	}
}
int Deque::remove_end(){
	if (is_empty()){
		exit(2);
	} else {
		int key = keys[end];
		keys[end] = 0;
		if (start == end){
			start = 0;
			end = 0;
		} else {
			if (end == 0){
				end = n-1;
			} else {
				end -= 1;
			}
		}
		size -= 1;
		return key;
	}
}
int Deque::get_end() const {
	return end;
}
int Deque::peek_end() const {
	return keys[end];
}

int main () {
	int P[20] = {20, 100, 80, 90, 80, 95, 105, 100, 90, 80, 70, 90, 100, 115, 125, 110, 95, 90, 80, 100};
	int S[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int temp;
	Deque p1(20);

	for (int i = 0; i < 20; i++){
		while((!p1.is_empty())&&(P[p1.peek_end()] <= P[i])){
			p1.remove_end();
		}
		if (p1.is_empty()){
			S[i] = i + 1;
		} else {
			S[i] = i - p1.peek_end();
		}
		p1.add_end(i);
	}

	for (int i = 0; i < 20; i++){
		cout << S[i] << endl;
	}
	return 0;
}
