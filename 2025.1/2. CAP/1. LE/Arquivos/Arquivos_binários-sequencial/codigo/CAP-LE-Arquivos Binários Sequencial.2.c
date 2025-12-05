#include <stdio.h>
#include <stdlib.h>

int main () {
typedef struct {
    int codigo;
    int quantidade;
    double valor;
} venda;

int cod = 48;
double média = 0;
double soma = 0;
int nquantidade = 0;
FILE *f = fopen("vendas.dat", "rb");
venda v;

while(fread(&v, sizeof(venda), 1, f)){
    if (v.codigo == cod){
        //nquantidade += v.quantidade;
        soma += v.valor;
        nquantidade++;
    }   
}
if (nquantidade == 0){
    printf("Não disponível\n");
} else {
    printf("%lf\n", soma/nquantidade);
}
return 0;
}