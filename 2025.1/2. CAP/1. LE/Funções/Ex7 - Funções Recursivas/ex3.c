#include <stdio.h>
 
long long contn(long n, int k){
    //caso base
    if ((n/10) <= 0){
        if (n == k){
            return 1;
        }
        else {
            return 0;
        }
    }
    //caso geral
    if ((n % 10)==k){
        return 1 + contn(n/10, k);
    } else {
        return 0 + contn(n/10, k);
    }
}

//Exemplo de aplicação e testes
int main() {
    printf("%d\n", contn(7620211922, 2));
    return 0;
}