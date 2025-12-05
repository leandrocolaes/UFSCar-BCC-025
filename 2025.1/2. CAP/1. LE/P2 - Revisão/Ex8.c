#include <stdio.h>
 
int main() {
    int n = 2;
    int cpf;

    typedef struct {
        char nome[52];
        float altura;
        float peso;
        int cpf;
        char genero[52];
    } imc;

    imc dados[n];
    //Entrada de dados
    for (int i = 0; i < n; i++){

        fgets(dados[i].nome, 52, stdin);
        scanf("%f", &dados[i].altura);
        scanf("%f", &dados[i].peso);
        scanf("%d", &dados[i].cpf);
        scanf(" %s", dados[i].genero);
    }
    scanf("%d", &cpf);
    for (int i = 0; i < n; i++){
        if (dados[i].cpf == cpf){
            printf("%.1f\n", dados[i].peso/(dados[i].altura*dados[i].altura));
        }

    }
    return 0;
}