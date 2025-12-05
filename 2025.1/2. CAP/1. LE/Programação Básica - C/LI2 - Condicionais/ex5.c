#include <stdio.h>

int main()
{
    //Entrada de dados
    float s, tax;
    scanf("%f", &s);
    tax= 0;

    //Classificando o salário para a taxa
    if (s > 0){
        if (s <= 400) {
            tax = 1.15;
        } else {
            if (s <= 800) {
                tax = 1.12;
            } else {
                if (s <= 1200) {
                    tax = 1.10;
                } else {
                    if (s  <= 2000) {
                        tax = 1.07;
                    } else {
                        tax = 1.04;
                    }
                }
            }
        }
    }
    //Saída de dados
    printf("Novo salario: %.2f\n", s*tax);
    printf("Reajuste ganho: %.2f\n", s*tax-s);
    printf("Em percentual: %.0f%\n", (tax-1)*100);
    return 0;
}