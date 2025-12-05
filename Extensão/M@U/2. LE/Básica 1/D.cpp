#include <iostream>

using namespace std;

int main() {
    long long int n;
    long long int m;
    long long int a;
    long long int a1;
    long long int a2;
    
    cin >> n;
    cin >> m;
    cin >> a;
    if(m%a == 0) {
        a1 = m/a;
    } else {
        a1 = m/a + 1;
    }

    if(n%a == 0) {
        a2 = n/a;
    } else {
        a2 = n/a + 1;
    }

    cout << a1*a2 << endl;
    return 0;
}   