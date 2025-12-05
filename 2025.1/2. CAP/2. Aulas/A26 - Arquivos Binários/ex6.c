#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f = fopen("ex6.bin", "r+b");
    int valor;
    while(!feof(f)){
        fread(&valor, sizeof(int), 1, f);
        printf("%d\n", valor);
        if (valor < 0){
            fwrite("0", sizeof(int), 1, f);
        }
    }

    while(!feof(f)){
        fread(&valor, sizeof(int), 1, f);
        printf("%d\n", valor);
    }
    return 0;
}