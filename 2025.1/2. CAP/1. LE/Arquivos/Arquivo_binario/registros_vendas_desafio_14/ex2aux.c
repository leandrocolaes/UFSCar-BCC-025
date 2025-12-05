#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int codigo;
    char comentario[50];
    double quantidade;
    double valor;
} venda;

int main () {
    FILE *f = fopen("vendas1.dat", "rb");
    FILE *g = fopen("auxvendas1.txt", "w");
    venda v;
    while(fread(&v, sizeof(venda), 1, f)){
        fprintf(g, "código: %u ", v.codigo);
        fprintf(g, "valor: %lf\n", v.valor);
    }

    fclose(f);
    fclose(g);
    return 0;
}