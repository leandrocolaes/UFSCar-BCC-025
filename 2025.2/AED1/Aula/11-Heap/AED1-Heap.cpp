#include <iostream>

using namespace std;

struct Node {
	int key;
	int p;
};

class MinHeap(){
private:
	Node* data;
	int tail;
public:
	MinHeap(){
		tail = 0;
	}
	enqueue(){
		if (tail == -1){
			exit(2);
		} else {
			int key = data[0].key;
			swap(data[0], data[tail]);
			tail -= 1;
			shift_up();
			return key;
		}
	}
	shift_up(){
		filho = tail;
	}
}
