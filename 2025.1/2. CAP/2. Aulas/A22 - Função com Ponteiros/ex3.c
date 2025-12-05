#include <stdio.h>
 
void imprima (int* v, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int n[3] = {1, 2, 3};

    imprima(n, 3);
    return 0;
}