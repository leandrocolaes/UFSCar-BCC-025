#include <stdio.h>

int main()
{
    int i, n;
    float nota[100], media, soma;
    media = 0;
    soma = 0;
    n = 0;

    for (i = 0; i < 100; i++) {
        scanf("%f", &nota[i]);
        soma += nota[i];
    }
    for (i = 0; i < 100; i) {
        if  (nota[i] > media) {
            n++;
        }
    }

    print("%d %f", n, media);
    return 0;
}