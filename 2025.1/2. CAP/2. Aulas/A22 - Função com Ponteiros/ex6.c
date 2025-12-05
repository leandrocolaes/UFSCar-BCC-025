#include <stdio.h>
#include <stdlib.h> 

typedef struct {
    int cod_produtor, cod_uva;
    double preco;
} vinho;

void learma(vinho *v) {
    scanf("%d%d%lf", &(*v).cod_produtor, &(*v).cod_uva, &(*v).preco);
}

vinho* maiorVinho(vinho *v1, vinho *v2){
    if ((*v1).preco > (*v2).preco){
        return v1;
    } else {
        return v2;
    }
}

int main() {
    vinho *v = (vinho*) malloc(2*sizeof(vinho));

    learma(&v[0]);
    learma(&v[1]);

    vinho *vMaior = maiorVinho(&v[0], &v[1]);
    printf("%d %d %lf", (*vMaior).cod_produtor, (*vMaior).cod_uva, (*vMaior).preco);
    free(v);

    return 0;
}