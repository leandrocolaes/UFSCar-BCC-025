#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, m, **p, x, verif;
    verif = 0;
    srand(time(NULL));
    scanf("%d %d", &n, &m);

    p = (int **) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        p[i] = (int *) malloc(m * sizeof(int*));
        for (int j = 0; j < m; j++){
            p[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < n;  i++){
        for (int j = 0; j < m; j++){
            printf("%d\n", p[i][j]);
        }
    }
    
    scanf("%d", &x);
    while (x != -1){
        for (int i = 0; i < n;  i++){
            for (int j = 0; j < m; j++){
                if (x == p[i][j]){
                    verif = 1;
                }
            }
        } 
        if (verif){
            printf("SIM\n");
        } else {
            printf("NÂO\n");
        }
        verif = 0;
        scanf("%d", &x);
    }

    for (int i = 0; i < n; i++){
        free(p[i]);
    }
    free(p);
    return 0;
}