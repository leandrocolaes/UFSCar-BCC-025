#include <iostream>

using namespace std;

int main() {
    int x, p;
    p = 0;
    cin >> x;
    for (int i = 5; i > 0; i--){
        while( (x-i) >= 0){
            x = x - i;
            p++;
        }
    }

    cout << p << endl;
    return 0;
}   