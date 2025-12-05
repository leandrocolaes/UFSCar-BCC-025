#include <stdio.h>

int main()
{
    //Entrada de dados
    int A, B, C, D, E, F, G, H, I, J, mes, dia, ano;
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    //Calculo
    A = (12-mes)/10;
    B = ano - A;
    C = mes + (12*A);
    D = B/100;
    E = D/4;
    F = 2-D+E;
    G = 365.25*B;
    H = 30.6001*(C+1);
    I = F+G+F+dia+5;
    J = I%7;

    //Decidindo o dia da semana
    switch(J){
        case 0:
            printf("SAB");
            break;
        case 1:
            printf("DOM");
            break;
        case 2:
            printf("SEG");
            break;
        case 3:
            printf("TER");
            break;
        case 4:
            printf("QUA");
            break;
        case 5:
            printf("QUI");
            break;
        case 6:
            printf("SEX");
            break;
    }

    return 0;
}