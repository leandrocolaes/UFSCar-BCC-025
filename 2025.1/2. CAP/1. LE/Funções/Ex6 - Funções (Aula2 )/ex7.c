#include <stdio.h>
#include <stdlib.h>
 
int * minmax (int* v, int n, int n1, int min, int max){
    int *v1, cont = 0;
    v1 = (int*) malloc (n1*sizeof(int));
    for (int i = 0; i < n; i++){
        if ((v[i] <= max)&&(v[i] >= min)){
            v1[cont] = v[i];
            cont++;
        }
    }
    return v1;
}

int main() {
    int v[5] = {1, 2, 3, 4, 5}, a[3];
    minmax(v, 5, 3, 2,4);
    for (int i = 0; i < 3; i++){
        printf("%d",  minmax(v, 5, 3, 2,4)[i]);
    }

    
    return 0;
}