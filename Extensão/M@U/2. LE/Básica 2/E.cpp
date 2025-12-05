#include <iostream>

using namespace std;

int main() {
    string s;
    int n;
    int c = 0;
    cin >> n >> s;

    for (; n > 0; n--){
        if (s[n] == s[n-1]){
            c ++;
        }
    }

    cout << c << endl;
    return 0;
}   