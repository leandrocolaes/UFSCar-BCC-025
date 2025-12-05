#include <stdio.h>
 
int exponencial(int x, int n){
    //Caso Base
    if (n == 1){
        return x;
    }
    //Caso Geral
    return x*exponencial(x, n-1);
}
//Testes e Demonstração
int main() {
    printf("%d\n", exponencial(3, 3));
    return 0;
}