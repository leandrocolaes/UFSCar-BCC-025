#include <iostream>

using namespace std;

int main () {
	int s, n, index, temp0, temp1;
	int max;
	cin >> s >> n;

	int** x  = new int*[n];

	for (int i = 0; i < 2)
	for(int i = 0; i < n; i++){
		cin >> x[i][0] >> x[i][1];
	}

	for(int i = n-1; i >= 0; i--){
		max = -1;
		for (int j = 0; j <= i; j++){
			if (x[i][0] > max){
				max = x[j][0];
				index = j;
			}
		}
		temp0 = x[i][0];
		temp1 = x[i][1];
		x[i][0] = x[index][0];
		x[i][1] = x[index][1];
		x[index][0] = temp0;
		x[index][1] = temp1;
	}

	for(int i = 0; i < n; i++){
		if(x[i][0] < s){
			s += x[i][1];
		} else {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
