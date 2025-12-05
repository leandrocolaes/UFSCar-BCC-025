#include <stdio.h>

int main() {
    float t, vm;

    //Entrada de dados
    scanf("%f", &t);
    scanf("%f", &vm);

    //Saida de dados
    printf("%6.2f\n", (t*vm)/12);
    return 0;
}