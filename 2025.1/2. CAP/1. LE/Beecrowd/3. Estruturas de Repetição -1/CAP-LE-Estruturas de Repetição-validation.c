#include <stdio.h>
 
int main() {
    float n1, n2, i, media;
    int v;
    i=0;
    media=0;
    v=0;

    while (v < 2){
        scanf("%f", &n1);
        if ((n1>=0) && (n1<=10)){
            media += n1/2;
            v++;
        } else {
            printf("nota invalida\n");
        }


    }

    printf("media = %.2f\n", media);
 
    return 0;
}