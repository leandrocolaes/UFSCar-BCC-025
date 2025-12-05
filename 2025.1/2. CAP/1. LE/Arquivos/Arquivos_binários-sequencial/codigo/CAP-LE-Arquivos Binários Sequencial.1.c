#include <stdio.h>
#include <stdlib.h>

int main () {
    typedef struct {
        int codigo;
        int quantidade;
        double valor;
    } venda;

    int cod = 48;
    double total;
    FILE *f = fopen("vendas.dat", "rb");
    venda v;

    while(fread(&v, sizeof(venda), 1, f)){
        if (v.codigo == cod){
            total += v.valor*v.quantidade;
        }
    }
    fclose(f);
    printf("%.2lf", total);
    return 0;
}