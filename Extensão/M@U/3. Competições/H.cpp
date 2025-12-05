#include <iostream>
#include <bitset>
#include <typeinfo>
#include <string>
#include <math.h> 

using namespace std;

int main(){
    int x, n, cont, decimal, index;
    string s;
    cin >> x;
    n = 31;
    decimal = 0;
    bitset <32> binario (x);
    for (n-1; n >= 0; n--){
        if (binario[n] != 0){
            cont = n;
            break;
        }

    }
    for (n; n >= n/2; n--){
        binario[cont-n] = binario[n];
    }

    for (n = cont; n >= 0; n--){
        decimal += binario[n]*pow(2, n);
    }
    index = 0;
    cout << cont;
    while (decimal > x) {
        if (binario[cont/2-index]){
            binario[cont/2-index] == '0';
            for (n = cont; n >= (n/2-index); n--){
                binario[cont-n] = binario[n];
        }

            for (n = cont; n >= 0; n--){
                decimal += binario[n]*pow(2, n);
            }

            
        } else {
            index++;
            cout << cont/2-index << endl;
            
         
        }
    }
    cout << decimal << endl;
    return 0;
}