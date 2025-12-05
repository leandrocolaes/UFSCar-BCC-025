int main(){
    int l, n, i, j, a, cont;
    n = 3;
    double m[n][n], soma, media;
    char t;
    scanf(" %c", &t);
    soma = 0;
    cont = 0;

    for (i = 0; i < n/2; i++){
        for (j = 0; j < n; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    for (i = 0; i < n/2; i++){
        for (j = i+1; j < n-i-1; j++){
            soma += m[i][j];
            cont++;

        }
    }

    if (t == 'S'){
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", soma/cont);
    }

    return 0;
}