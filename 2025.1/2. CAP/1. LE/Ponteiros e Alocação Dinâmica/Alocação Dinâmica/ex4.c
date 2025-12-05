#include <stdio.h>
#include <string.h>
 
int main() {
    int n, i, idmapreco, idmaquant, maquant = 0;
    float mapreco = 0;


    typedef struct {
        int codigo;
        char nome[50];
        int quantidade;
        float preco;
    } produto;

    scanf("%d", &n);

    produto *p = (produto *) malloc(n*sizeof(produto));

    for (i = 0; i < n; i++){
        scanf("%d", &p[i].codigo);
        while((getchar())!= '\n');
        fgets(p[i].nome, 50, stdin);
        p[i].nome[strlen(p[i].nome)-1] = '\0';
        scanf("%d", &p[i].quantidade);
        scanf("%f", &p[i].preco);

        if (mapreco < p[i].preco){
            mapreco = p[i].preco;
            idmapreco = i;
        }
        if (maquant < p[i].quantidade){
            maquant = p[i].quantidade;
            idmaquant = i;
        }
    }

    for (i = 0; i < n; i++){
        if ((i == idmapreco) | (i == idmaquant)){
            printf("\n%d %s %d %.2f", p[i].codigo, p[i].nome, p[i].quantidade, p[i].preco);
        }
    }
    return 0;
}