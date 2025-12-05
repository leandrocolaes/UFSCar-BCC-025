#include <stdio.h>

int main() {
    int dias, ano, mes, dias1;
    scanf("%d", &dias);

    ano = dias/365;
    mes = (dias - ano*365)/30;
    dias = dias - ano*365 - mes*30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;
}