#include <stdio.h>
#include <math.h>

int main()
{
    int n, a;
    float tax, r;
    scanf("%d", &n);
    for (; n > 0; n--){
        scanf("%d", &a);
        r = sqrt(a/(4*3.14));
        if  (r < 12){
            printf("vermelho = R$ %.2f\n", a*0.09);
        } else {
            if (r <= 15) {
                printf("azul = R$ %.2f\n", a*0.07);
            } else {
                printf("amarelo = R$ %.2f\n", a*0.05);
            }
        }
    }
    
    return 0;
}