#include <stdio.h>

int main(){
    int dia, mes, ano, diaMax;

    if ((ano != 0)&&(mes > 0)&&(mes < 13)&&(dia > 0)&&(dia < 32)){
        switch(mes) {
            case 1: 
                diaMax = 31;
                break;
            case 3: 
                diaMax = 31;
                break;
            case 7:
                diaMax = 31;
                break;
            case 8:
                diaMax = 31;
                break;
            case 10:
                diaMax = 31;
                break;
            case 12:
                diaMax = 31;
                break;
            case 4:
                diaMax = 30;
            case 5:
                diaMax = 30;
            case 6:
                diaMax = 30;
            case 9:
                diaMax = 30;
            case 11:
                diaMax = 30;
            case 2:
                if (((mes%4 ==0)&&(mes%4!=0))||(mes%400 ==0)){
                    diaMax = 29;
                } else {
                    diaMax = 28;
                }
        }
        if (dia > diaMax){
            printf("Data invalida");
        } else {
            printf("Data valida");
        }
    } else {
        printf("Data invalida");
    }
    
    return 0;
}