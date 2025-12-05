#include <stdio.h>
 
int main() {
    typedef struct {
        int dia;
        int mes;
        int ano;
    } data;
    typedef struct {
        char nome [32];
        data contratacao;
        data demissão;
    } registro;

    registro r1;
    fgets(r1.nome, 32, stdin);
    r1.nome[strlen(r1.nome)-1] = "/0";
    scanf("%d%*c", &r1.data.dia);
    scanf("%d%*c", &r1.data.mes);
    scanf("%d%*c", &r1.data.ano);

    printf("nome: %s\n", r1.nome);
    printf("data: %d/%d/%d\n", r1.data.dia, r1.data.mes, r1.data.ano);
    return 0;
}