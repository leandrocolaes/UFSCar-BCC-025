#include <iostream>

using namespace std;

int main() {
    string a1, a2, a3;
    cin >> a1 >> a2;
    for (int i = 0; i < a1.size(); i++) {
        
        if(a1[i] == a2[i]) {
            cout << '0';
        } else {
            cout << '1';
        }
    }
    return 0;
}   