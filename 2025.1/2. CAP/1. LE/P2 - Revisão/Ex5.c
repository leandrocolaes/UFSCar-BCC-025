#include <stdio.h>
 
int main() {
    int n = 4;
    int m[n][n], d1[n], d2[n], upd1[n*n], downd2[n*n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &m[i][j]);
            if (i == j){
                d1[i] = m[i][j];
            } else {
                if (j > i){
                       
                    upd1[n*i+j-((i+2)*(i+1)/2)] = m[i][j];
                }
            }
            if ((i+j) == (n-1)){
                d2[i] = m[i][j];
            } else {
                if ((j+i) > (n-1)){
                    downd2[n*i+j - (n*(n-i)/2)] = m[i][j];
                }
            }
        }
    }
    printf("Elementos da diagonal principal:");
    for (int i = 0; i < n; i++){   
        printf(" %d", d1[i]);
    }
    printf("\n");

    printf("Elementos da diagonal segundaria:");
    for (int i = 0; i < n; i++){   
        printf(" %d", d2[i]);
    }
    printf("\n");

    printf("Elementos acima da diagonal principal:");
    for (int a = 0; a < n*(n-1)/2; a++){   
        printf(" %d", upd1[a]);
    } 
    printf("\n");

    printf("Elementos abaixo da diagonal secundária:");
    for (int i = 0; i < n*(n-1)/2; i++){   
        printf(" %d", downd2[i]);
    } 
    printf("\n");   
    return 0;
}