#include <stdio.h>

int main() {
    float p, h;

    //Entrada de dados
    scanf("%f", &p);
    scanf("%f", &h);

    printf("%.2f\n", p/(h*h));

    return 0;
}