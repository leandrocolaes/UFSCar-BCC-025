#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int codigo;
    char comentario[50];
    double quantidade;
    double valor;
} venda;

int main () {
    FILE *f = fopen("vendas1.dat", "r+b");
    int unsigned cod;
    double correcao;
    venda v;
    double novo_valor;
    scanf("%u", &cod);
    scanf("%lf", &correcao);

    while(fread(&v, sizeof(venda), 1, f)){
        if (v.codigo == cod){
            v.valor *= correcao;
            fseek(f, sizeof(venda)*(-1), SEEK_CUR);
            
            fwrite(&v, sizeof(venda), 1, f);
        }
    }

    fclose(f);
    return 0;
}