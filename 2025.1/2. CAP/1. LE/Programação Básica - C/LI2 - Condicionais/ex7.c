#include <stdio.h>

int main(){
    int ano, i, soma;
    soma = 0;
    scanf("%d", &ano);

    for (i = 1000; i >= 1; i /= 10) {
        soma += ano/i;
        ano -= ano/i*i;
    }
    switch (soma%5) {
        case 0:
            printf("O perfil é Tímido\n");          
            break;
        case 1:
            printf("O perfil é Sonhador\n");    
            break;
        case 2:
            printf("O perfil é Paquerador\n");    
            break;
        case 3:
            printf("O perfil é Atraente\n");    
            break;
        case 4:
            printf("O perfil é Irrestível\n");
            break;
    }

    return 0;
}