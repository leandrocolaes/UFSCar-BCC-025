#include <iostream>
#include <string>

using namespace std;

int main(){
    int w;
    int i;

    cin >> w;

    if (w % 2 == 0) {
        for (i = 0; i < w-2; i = i + 2){
            if ((w - i)%2 == 0){
                cout << "YES" << endl;
                return 0;
            }
        }
    } else {
        cout << "NO" << endl;
        return 0;
    }

    cout << "NO" << endl;

    return 0;
}
