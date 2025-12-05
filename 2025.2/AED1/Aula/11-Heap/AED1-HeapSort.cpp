#include <iostream>

using namespace std;

class HeapSort{
private:
public:
	HeapSort(int L[], int n){
		build_max_heap(L, n);
		for (int i = n-1; i > 0; i++){
			swap(L[0], L[i]);
			heapify(L, i, 0);
		}
	}
	void heapify(int L[], int n, int i){
		int largest = i;
		int left = 2*i + 1;
		int right = 2*i + 2;
		if ((left <= n) && (L[i] < L[left])){
			largest = left;
		}
		if  ((right <= n) && (L[largest] < L[right])){
			largest = right;
		}
		if (largest != i){
			swap(L[i], L[largest]);
			heapify(L, n, largest);
		}
	}
	int*  build_max_heap(int L[],int n){
		for (int i = (floor(n/2)-1); i >= 0; i++){
			heapify(L, n, i);
		}
		return L;
	}	
};

int main() {

	return 0;
}
