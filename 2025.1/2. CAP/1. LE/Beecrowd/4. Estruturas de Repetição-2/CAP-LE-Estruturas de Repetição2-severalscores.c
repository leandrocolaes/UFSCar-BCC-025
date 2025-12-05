#include <stdio.h>

int main()
{
    float n1, n2, media;
    int v;
    v =1;
    while (v == 1){
        scanf("%f", &n1);
        while ((n1 < 0)||(n1 > 10)){
            printf("nota invalida\n");
            scanf("%f", &n1);
        }
        scanf("%f", &n2);
        while ((n2 < 0)||(n2 > 10)){
            printf("nota invalida\n");
            scanf("%f", &n2);
        }
        printf("media = %.2f\n", (n1+n2)/2);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &v);
        while((v > 2) || (v < 1)){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &v);
        }
    }

    
    return 0;
}