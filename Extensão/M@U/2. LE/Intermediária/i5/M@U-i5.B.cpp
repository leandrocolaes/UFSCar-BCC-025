#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int k, max, index, temp;
	int mes[12];
	int cont = 0;
	int aprox= 0;

	cin >> k;
	for (int i = 0; i < 12; i++){
		cin >> mes[i];
	}
	for (int i = 11; i >= 0; i-- ){
		max = -1;
		for (int j = 0; j <= i; j++){
			if (mes[j] > max){
				max = mes[j];
				index = j;
			}
		}
		temp = mes[i];
		mes[i] = mes[index];
		mes[index] = temp;
	}

	for (int i = 11; i >= 0; i--){
		if (k == 0){
			cout << 0 << endl;
			return 0;
		}
		aprox += mes[i];
		cont++;
		if ((aprox >= k)){
			cout << cont << endl;
			return 0;
		}

	}

	cout << -1 << endl;	
	return 0;
}
