#include <stdio.h>
#include <stdlib.h>
 
int* le_vetor_texto (int *n){
    
    int *v;
    v = (int*) malloc ((*n) * sizeof(int));

    FILE *f = fopen("ex.txt", "r");
    fscanf(f, "%d", n);

    for (int i = 0; i < *n; i++){      
        fscanf(f, "%d", &v[i]);
    }
    return v;
}

int main() {

    int *n;
    n = (int*) malloc (sizeof(int));
    printf("%p\n", le_vetor_texto(n));

    return 0;
}