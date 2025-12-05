#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, l, r, k, par, impar;
    
    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> l >> r >> k;
        if ((l % 2 == 0)&&(r % 2 == 0)){
            impar  = (r - l)/2;
        } else {
            if ((l % 2 != 0)&& (r % 2 != 2)){
                impar = (r - l + 2)/2;
            } else {
                impar = (r - l + 1)/2;
            }
        }
        if (((r-l+1)==1)&&(l == 1)){
            cout << "NO" << endl;
        } else {
         if (impar > k){
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }



    return 0;
}
