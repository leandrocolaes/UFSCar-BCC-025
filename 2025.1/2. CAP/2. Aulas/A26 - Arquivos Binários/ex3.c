#include <stdio.h>
#include <stdlib.h>
 
int* le_binario(int *n){
    FILE *f = fopen("ex.bin", "rb");
    fread(n, sizeof(int), 1, f);
    int *v = (int*) malloc (*n*sizeof(int));
    fread(v, sizeof(int), *n, f);
    printf("%d", v[1]);
}

int main() {
    int n = 0;

    le_binario(&n);
    return 0;
}