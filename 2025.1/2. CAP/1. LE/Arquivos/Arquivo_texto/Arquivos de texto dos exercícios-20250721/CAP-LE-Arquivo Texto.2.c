#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char nome_arquivo[10];
    char linha[200];
    int inicio, fim, cout_linha = 0;

    scanf("%s", nome_arquivo);
    scanf("%d%d", &inicio, &fim);
    FILE *f = fopen(nome_arquivo, "r");

    while (!feof(f)){
        fgets(linha, 200, f);
        cout_linha++;

        if ((cout_linha > inicio-1)&&(cout_linha < fim+1)){
            printf("%s\n", linha);
        }
    }
    fclose(f);
    return 0;
}