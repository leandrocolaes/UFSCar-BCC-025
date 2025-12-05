#include <stdio.h>

int main(){
    int i, f;
    //Entrada de dados
    scanf("%d", &i);
    scanf("%d", &f);

    //Decisão e saída
    if (((24-i)+f) > 24) {
        printf("%d\n", f-i);
    } else {
        printf("%d\n", (24-i)+f);
    }

    return 0;
}