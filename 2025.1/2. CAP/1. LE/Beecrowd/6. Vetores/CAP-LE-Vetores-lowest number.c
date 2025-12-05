#include <stdio.h>

int main(){
    int n, menor, x, index;
    scanf("%d", &n);
    scanf("%d", &menor);
    index = 0;

    for (int i = 1;i < n; i++){
        scanf("%d", &x);
        if (x < menor){
            menor = x;
            index = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", index);
    return 0;
}
