#include <stdio.h>

void pares (int *v, int n){
    int p = 0;
    for (int i = 0; i < n; i++){
        if (v[i] % 2 == 0){
            p++;
        }
    }
    printf("%d", p);
}

int main() {
    int n[3] = {1, 2, 3};

    pares(n, 3);
    return 0;
}