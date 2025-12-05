#include <stdio.h>

int main()
{
    //Entrada de dados
    float p, h, imc;
    scanf("%f", &p);
    scanf("%f", &h);
    imc = p/(h*h);

    //Classificação do imc
    if (imc < 18.5) {
        printf("Abaixo do peso");
    } else {
        if (imc < 25) {
            printf("Peso normal");
        } else {
            if (imc < 30) {
                printf("Acima do peso");
            } else {
                printf("Obeso");
            }
        }
    }
    return 0;
}