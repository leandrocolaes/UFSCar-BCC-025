#include <stdio.h>
#include <stdlib.h>
 
int main() {
    FILE *f;
    int n, soma;
    soma = 0;
    f = fopen("ex1.txt", "r");
    if (f == NULL){
        perror("Erro ao tentar abrir o arquivo. \n");
        exit(1);
    }

    while (fscanf(f, "%d", &n)!= EOF){
        soma += n;
    }
    fclose(f);
    printf("%d", soma);
    return 0;
}