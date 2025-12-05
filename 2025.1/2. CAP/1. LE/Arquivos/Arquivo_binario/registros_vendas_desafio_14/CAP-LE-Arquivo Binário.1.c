#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int codigo;
    char comentario[50];
    double quantidade;
    double valor;
} venda;

typedef struct {
    unsigned int codigo;
    double total;
} total_venda;

int findVetor(total_venda v[], int tamanho, unsigned int procurado){
    for (int i = 0; i < tamanho; i++){
        if (v[i].codigo == procurado){
            return i+1;
        }
    }
    return 0;
}

int main(){
    FILE *f = fopen("vendas1.dat", "rb");
    venda v;
    int codigos = 0;
    total_venda *total_codigos = (total_venda*) malloc (sizeof(total_venda));

    while(fread(&v, sizeof(venda), 1, f)) {
        if (!(findVetor(total_codigos, codigos, v.codigo))){
            codigos++;
            
            total_codigos = (total_venda*) realloc(total_codigos, codigos*sizeof(total_venda));
            total_codigos[codigos-1].codigo = v.codigo;
            total_codigos[codigos-1].total = v.quantidade*v.valor;
        } else {
            total_codigos[findVetor(total_codigos, codigos, v.codigo)-1].total += v.quantidade*v.valor;
        }
    }

    for (int i = 0; i < codigos; i++){
        printf("código: %u total: %lf\n", total_codigos[i].codigo, total_codigos[i].total);
    }
    return 0;
}