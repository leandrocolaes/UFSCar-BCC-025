#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor;
    long int posicao;
    FILE *f = fopen("ex.txt", "r+");

    while(!feof(f)){
        fscanf(f, "%d", &valor);
        posicao = ftell(f)/sizeof(int);
        printf("%d %ld\n", valor, posicao);
        if (valor < 0){
            
            
        }
        
    }
    return 0;
}