#include <stdio.h>
 
int main() {
    int *p, vet[10] = {0 ,1, 2,3, 4, 5, 6, 7, 8, 8};
    p = &vet[5];
    *p = 0;
    p[1] = 0;
    p[-1] = 0;
    p++;
    p[0] = 0;
    *(p + 1) = 0;

    for (int i = 0; i < 10; i++){
        printf("%d\n", vet[i]);
    }
    return 0;
}