#include <stdio.h>

int main(){
    int n, i, quantidade;
    double valor, soma, media;
    FILE *arqdados;


    arqdados = fopen("dados1.txt", "r");

    fscanf(arqdados, "%d", &quantidade);

    soma = 0;
    for(int i = 0; i < quantidade; i++){
        fscanf(arqdados, "%lf", &valor);
        soma += valor;
    }
    media = soma/quantidade;


    fclose(arqdados);


    if(quantidade > 0)
        printf("media = %g\n", media);

    return 0;
}