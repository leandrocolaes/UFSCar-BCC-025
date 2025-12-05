#include <iostream>

using namespace std;

int main(){
    int n;
    float super, colap;
    string s, t;
    super = 0;
    colap = 0;
    cin >> n >> s >> t;
    for (n-1; n >= 0; n--){
        if (s[n] == '*') {
             super++;
            if(s[n] != t[n]){
                colap++;
            }
        }
    }
    printf("%.2f\n", colap/super);
    return 0;
}