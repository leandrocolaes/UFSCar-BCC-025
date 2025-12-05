
#include<stdio.h>

int main(){
    int n, i, quantidade;
    int cont = 0;
    double valor, soma, media;
    FILE *arqdados;

    arqdados = fopen("dados1.txt", "r");

    soma = 0;
    while(!feof(arqdados)){
        fscanf(arqdados, "%lf", &valor);
        soma += valor;
        cont ++;
    }
    media = (soma)/cont;
    
    fclose(arqdados);

    printf("media = %g\n", media);

    return 0;
}