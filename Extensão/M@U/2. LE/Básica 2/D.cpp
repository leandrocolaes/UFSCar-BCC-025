#include <iostream>

using namespace std;

int main() {
    string x;
    int n;
    int r;
    r = 0;

    cin >> n;
    for(; n > 0; n--){
        cin >> x;
        if ((x[0] == '+')||(x[2] == '+')){
            r += 1;   
        } else {
            if ((x[0] == '-')||(x[2] == '-')){
                r -= 1;   
        }
        }
       
    }

    cout << r << endl;
    return 0;
}   