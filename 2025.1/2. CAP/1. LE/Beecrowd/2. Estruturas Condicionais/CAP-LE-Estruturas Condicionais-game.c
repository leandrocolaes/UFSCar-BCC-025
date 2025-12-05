#include <stdio.h>
 
int main() {
    int i, f;
    scanf("%d %d", &i, &f);

    if ((24-i + f) > 24) {
        printf("O JOGO DUROU %d HORA(S)\n", f-i);
    } else {
        printf("O JOGO DUROU %d HORA(S)\n", 24-i + f);
    }

 
    return 0;
}