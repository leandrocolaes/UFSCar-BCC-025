#include <iostream>

using namespace std;

int main() {
    int k, n, w, total, rest;

    cin >> k >> n >> w;
    total = 0;
    for (; w > 0; w--){
        total += w*k;
    }
    if ((total - n) < 0) {
        rest = 0;
    } else {
        rest = total - n;
    }
    cout << (rest) << endl;
    return 0;
}   