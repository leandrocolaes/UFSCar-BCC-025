#include <stdio.h>
 
void indice_maximo(int *v, int n){
    int maior = v[0];
    int imaior = 0;

    for (int i = 0; i < n; i++){
        if (maior < v[i]){
            maior = v[i];
            imaior = i;
        }
    }

    printf("%d\n", imaior);
}

int main() {
    int n[4] = {1, 2, 4, 3};

    indice_maximo(n, 4);
    return 0;
}