int ** alocaMatriz(int m, int n){
    int **p;
    p = (int **) malloc (m*sizeof(int*));
    for (int i = 0; i < m; i++){
        p[i] = (int*) malloc(n*sizeof(int));
    }

    return p;
}

void preencheMatriz (int **a, int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
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

int find(int **A, int m, int n, int x){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
                if (x == A[i][j]){
                    return 1;
                }
        }
    }
    return 0;
}

void liberaMem(int **M, int n){
    for (int i = 0; i < n; i++){
        free(M[i]);
    }
    free(M);
}

int main()
{
    int n,m,x;
    int ** A;
    // Lê a ordem da matriz
    printf("\nNúmero de linhas: ");
    scanf("%d",&m);
    printf("Número de colunas: ");
    scanf("%d",&n);

    A = alocaMatriz(m,n);
    preencheMatriz(A,m, n);
    imprime(A,m,n);
    scanf("%d",&x);
    while (x != -1){
        if (find(A,m,n,x)){
            printf("número encontrado!\n");
        }
        else{
            printf("número não encontrado!\n");
        }
        scanf("%d",&x);
    }
    liberaMem(A,m);
    return 0;
}