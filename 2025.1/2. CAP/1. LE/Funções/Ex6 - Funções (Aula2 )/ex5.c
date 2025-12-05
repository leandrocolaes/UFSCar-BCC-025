#include <stdio.h>
 

int ** alocaMatrix(int m, int n){
    int **p;
    p = (int **) malloc (m*sizeof(int*));
    for (int i = 0; i < m; i++){
        p[i] = (int*) malloc(n*sizeof(int));
    }

    return p;
}

void leMatriz (int **a, int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
int ** transposta(int **a, int m, int n){
    int **mat = alocaMatrix(n, m);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            mat[i][j] = a[j][i];
        }
    }
    return mat;
} 

void imprime (int **M, int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
}

void liberaMem(int **M, int n){
    for (int i = 0; i < n; i++){
        free(M[i]);
    }
    free(M);
}
int main() {
    int m, n, **z, **z1;
    m = 3;
    n = 2;

    z = alocaMatrix(m, n);
    leMatriz(z, m, n);
    z1 = transposta(z, m, n);
    imprime(z, m, n);
    imprime(z1, n, m);

    liberaMem(z, m);
    liberaMem(z1, n);
    return 0;
}