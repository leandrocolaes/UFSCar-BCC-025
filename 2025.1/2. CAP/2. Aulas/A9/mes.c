#include <stdio.h>

int main (){

    int m;
    int dias;

    scanf("%d", &m);
    if ((m == 1)||(m == 3) || (m==5) || (m==7) || (m==9) || (m==11)) {
        printf("O mês tem 31 dias");
    }
    else 
    {
        if ((m==4)||(m==6)||(m==8)||(m==10)|(m==12)){
            printf("O mês tem 30 dias");
        }  
        else {
            printf("O mês tem 28 dias");
        }
    } 
   

    return 0;
}