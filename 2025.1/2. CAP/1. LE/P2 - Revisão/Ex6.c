#include <stdio.h>
 
int main() {
    int n = 10;
    int soma, m[n][n];
    soma = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
            if (i == j){
                soma += m[i][j];
            }
        } 
    }
    printf("%d\n", soma);
    return 0;
}