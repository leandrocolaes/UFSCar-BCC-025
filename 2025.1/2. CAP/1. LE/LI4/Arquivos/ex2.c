#include <stdio.h>
#include <stdlib.h>
 
int main() {
    FILE *f;
    f = fopen("ex1.txt", "r");
    int n, soma = 0;
    if (f == NULL){
        perror("Erro ao tentar abrir o arquivo. \n");
        exit(1);
    }

    while (fscanf(f, "%d", &n)!= EOF){
        printf("%d\n", n);
    }

    
    return 0;
}