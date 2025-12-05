#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    int quantidade;
    double valor;
} venda;

int main () {
    double maior = 0;
    int mcod = 0;
    int mquantidade = 0;
    FILE *f = fopen("vendas.dat", "rb");
    venda v;

    while(fread(&v, sizeof(venda), 1, f)){
        if (maior < v.valor*v.quantidade){
            maior = v.valor*v.quantidade;
            mcod = v.codigo;
        }

    }
    fseek(f, 0, SEEK_SET);
    while(fread(&v, sizeof(venda), 1, f)){
        if (mcod == v.codigo){
            mquantidade++;
        }

    }

    printf("%d %d %.2lf", mcod, mquantidade, maior);
    return 0;
}