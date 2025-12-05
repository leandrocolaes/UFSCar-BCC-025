#include <stdio.h>
#include <stdlib.h>

void escreve_texto(int *v, int n){
    FILE *f = fopen("ex.txt", "w+");
    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; i++){
        fprintf(f, "%d\n", v[i]);
    }
}

int main() {
    int v[4] = {1, 2, 3, 4};
    int n = 4;

    escreve_texto(v, n);
    return 0;
}