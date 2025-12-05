#include <stdio.h>

int main(){
    int l, n, i, j, a, cont;
    n = 12;
    float m[n][n], soma, media;
    char t;
    scanf(" %c", &t);
    soma = 0;
    cont = 0;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%f", &m[i][j]);
        }
    }

    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            soma += m[i][j];
            cont++;
        }
    }

    if (t == 'S'){
        printf("%.1f\n", soma);
    } else {
        printf("%.1f\n", soma/cont);
    }

    return 0;
}
