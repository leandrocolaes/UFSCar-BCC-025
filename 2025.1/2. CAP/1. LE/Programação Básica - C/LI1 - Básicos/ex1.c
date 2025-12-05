#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    //Entrada de dados
    printf("Informe as notas: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    media = 0;

    media = (n1*2+n2*3+n3*5)/10;
    printf("Media: %.1f", media);

    return 0;
}