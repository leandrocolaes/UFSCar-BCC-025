#include <stdio.h>
#include <stdlib.h>

void escreve_binario(int *v, int n){
    FILE *f = fopen("ex.bin", "w+b");
    fwrite(&n, sizeof(int), 1, f);
    fwrite(v, sizeof(int), 5, f);
}

int main() {
    int vet[3] = {1, 2, 3};
    int n = 3;
    int *v;
    v = vet;
    escreve_binario(v, n);
    return 0;
}