#include <iostream>

using namespace std;

int main() {
    float n;
    float i;
    float s;
    s = 0;
    cin >> n;
    for(int a = n; a > 0; a--) {
        cin >> i;
        s += i/n;
    }

    cout << s << endl;
    return 0;
}   