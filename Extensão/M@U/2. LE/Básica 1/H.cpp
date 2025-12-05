#include <iostream>

using namespace std;

int main() {
    int n;
    int a;
    int k;
    int l;
    int c;
    int d;
    int p;
    int nl;
    int np;
    int num1;
    int num2;
    int num3;
    int esc;
// drink
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    num1 = c*d/1;
    num2 = p / np;
    num3 = k*l / nl;

    esc = num1

    if (esc > num2){
        esc = num2;
    } else {
    }
    if (num3 > num2) {  
        esc = num2;
    } else {
        esc = num3;
    }
    if (num1 > num3){
        esc = num3;
    } else {
        esc = num1;
    }

    cout << esc/n << endl;
    
return 0;

}   