/*
  Leitura de dados em vetor e apresentacao
  Input: uma sequencia de 10 valores inteiros
  Output: a mesma sequencia de 10 valores
*/
#include <stdio.h>

int main(void){
    unsigned int vet[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 10; i++) {
        if (i == 9) {
            printf("%d\n", vet[i]);
        } else {
            printf("%d ", vet[i]);
        }
        
    }
    return 0;
}