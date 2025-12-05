#include <iostream>

using namespace std;

int main() {
    int n;
    int cont;
    cont = 0;
    int a;
    int b;
    int maior;
    maior = 0;
    int pas;
    pas = 0;
    cin >> n;
    while(cont < n){
        cin >> a;
        cin >> b;
        pas = pas + b - a;
        if (pas > maior) {
            maior = pas;
        }
        cont = cont + 1;
        
    }
    cout << maior << endl;
    
return 0;

}   