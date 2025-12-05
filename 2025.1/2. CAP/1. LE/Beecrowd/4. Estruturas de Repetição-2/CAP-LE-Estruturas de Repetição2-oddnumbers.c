#include <stdio.h>

int main()
{
    int soma, i, f, a;
    scanf("%d", &f);
    scanf("%d", &i);
    soma = 0;

    for (i += 1; i<f; i++) {
        if (i < 0){
            a = -i;
            if (a%2 == 1){
                soma += -a;
            }
        } else {
            a = i;
            if (a%2 == 1){
                soma += a;
            }
        }
        
    }

    printf("%d\n", soma);
    return 0;
}