#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    int d;
    int maior;

    cin >> a;
    cin >> b;
    if (a > b) {
        maior = a;
    } else {
        maior = b;
    }
    cin >> c;
    if (c > maior) {
        maior = c;
    
    }
    cin >> d;
    if (d > maior) {
        maior = d;
    }
    cout << maior << endl;
return 0;

}   