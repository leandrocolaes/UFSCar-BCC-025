    #include <iostream>

    using namespace std;

    int main() {
        int a;
        int b;
        int n = 0;
        cin >> a >> b;
        while (b >= a) {
            a = a*3;
            b = b*2;
            n += 1;
        }

        cout << n << endl;
        return 0;
    }   