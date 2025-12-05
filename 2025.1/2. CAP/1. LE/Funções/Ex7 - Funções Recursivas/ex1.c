#include <stdio.h>
 
int ex1 (int v[], int n, int x){
    int cont = 0;
    if (n == 0){
        return 0;
    } else {
        if (v[0] == x){
            cont++;
        }
        return cont + ex1(&v[1], n-1, x);
    }
}

int main() {
    int v[6] = {1, 2, 3, 3, 3 , 4};
    printf("%d\n", ex1(v, 6, 3));
    return 0;
}