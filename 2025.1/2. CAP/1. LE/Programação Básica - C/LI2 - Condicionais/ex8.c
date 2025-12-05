#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if((a+b > c)&&(a+c> b)&&(b+c > a)){
        if ((a == b)&&(b == c)){
            printf("Equilátero\n");
        } else {
            if ((a == b)||(b == c)||(c == a)){
                printf("Isósceles\n");
            } else {
                printf("Escaleno\n");
            }
        }
    } else {
        printf("Não formam um triângulo\n");
    }

    return 0;
}