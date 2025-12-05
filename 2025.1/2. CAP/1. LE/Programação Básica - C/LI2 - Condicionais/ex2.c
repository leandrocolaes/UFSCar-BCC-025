#include <stdio.h>

int main()
{
    //Entrada de Dados
    int n1, n2, n3, temp;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    //Processo de ordenzação
    if (n1 < n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 < n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 < n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    //Saída de dados
    printf("%d %d %d", n1, n2, n3);
    return 0;
}