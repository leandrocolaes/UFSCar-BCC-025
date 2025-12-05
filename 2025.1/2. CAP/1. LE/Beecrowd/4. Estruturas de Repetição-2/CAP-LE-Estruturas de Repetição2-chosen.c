#include <stdio.h>

int main()
{
    int i, id, mid;
    float mnota, nota;
    mnota = 0;
    scanf("%d", &i);
    for (;i > 0; i--) {
        scanf("%d", &id);
        scanf("%f", &nota);

        if (nota >= 8) {
            if (nota > mnota) {
                mnota = nota;
                mid = id;
            }
        }
    }

    if (mnota == 0) {
        printf("Minimum note not reached\n");
    } else {
        printf("%d\n", mid);
    }
    return 0;
}