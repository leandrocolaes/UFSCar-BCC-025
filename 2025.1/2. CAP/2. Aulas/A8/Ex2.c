#include <stdio.h>
//Troca de unidade
int main()
{
    float c;
    float f;

    printf("Informe a temperatura(Celcius): ");
    scanf("%f", &c);

    f = (9*c+160)/5;

    printf("A temperatura em Fahrenheit: %4.2f\n", f);

    return 0;
}