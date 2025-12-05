#include <stdio.h>
 
int main() {
    float s, ns, tax;
    scanf("%f", &s);

    if (s <= 400) {
        tax = 1.15;
    } else {
        if (s <= 800) {
            tax = 1.12;
        } else {
            if (s <= 1200) {
                tax = 1.10;
            } else {
                if (s <= 2000) {
                    tax = 1.07;
                } else {
                    tax = 1.04;
                }
            }
        }
    }

    printf("Novo salario: %.2f\n", s*tax);
    printf("Reajuste ganho: %.2f\n", s*tax-s);
    printf("Em percentual: %.f %\n", tax*100-100);
 
    return 0;
}