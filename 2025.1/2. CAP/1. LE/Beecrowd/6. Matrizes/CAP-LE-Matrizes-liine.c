#include <stdio.h>
#include <string.h>

int main(){
    int l, n, i, j, a;
    n = 12;
    float m[n][n], soma, media;
    char t;

    scanf("%d", &l);
    scanf(" %c", &t);

    soma = 0;
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%f", &m[i][j]);
        }
    }
    if (t == 'S'){
        for (a = 0; a < n; a++){
            soma += m[l][a];
        }
        printf("%f\n", soma);
    } else {
        for (a = 0; a < n; a++){
            soma += m[l][a];
        } 
        printf("%.1f\n", soma/n);
    }
    return 0;
}
