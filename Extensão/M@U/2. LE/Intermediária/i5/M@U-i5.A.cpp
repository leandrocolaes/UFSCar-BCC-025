#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int n;
	cin >> n;
	int min = 1000;
	int indexmin;
	int a;
	int temp;
	int* v = new int[n];

	for (int i = 0; i < n; i++){
		cin >> v[i];
	}

	for (int i = 0; i < n-1; i++){
		if (i == 0){
			min = v[0]-v[n-1];
			min = sqrt(min*min);
			indexmin = n;
		}
		temp = v[i]-v[i+1];
		temp = sqrt(temp*temp);
		if (min > temp){
			min = temp;
			indexmin = i + 1;
		}
	}

	if (indexmin == n){
		cout << indexmin << " " << 1 << endl;
	} else {
		cout << indexmin << " " << indexmin + 1 << endl;
	}

	return 0;
}
