/*
  Leitura de dados em vetor e apresentacao
  Input: uma sequencia de 10 valores inteiros
  Output: a mesma sequencia de 10 valores
*/
#include <stdio.h>

int main(void){
    unsigned int vet[9];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    for (i = 9; i >= 0; i--) {
        if (i == 0) {
            printf("%d\n", vet[i]);
        } else {
            printf("%d ", vet[i]);
        }
        
    }
    return 0;
}