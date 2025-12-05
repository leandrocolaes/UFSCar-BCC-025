#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string t;
    cin >> s >> t;
    int v = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] != t[s.length()-i-1]){
            v = 1;
        }
    }
    if (v){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    
    return 0;
}   