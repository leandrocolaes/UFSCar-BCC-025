#include <stdio.h>
 
int main() {
    double a, b, c, m;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (b > a) {
        m = a;
        a = b;
        b = m;
    }
    if (c > a) {
        m = a;
        a = c;
        c = m;
    }
    if (b < c) {
        m = b;
        b = c;
        c = m;
    }


    if (a >= (b + c)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (a*a == b*b + c*c) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (a*a > b*b + c*c) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (a*a < b*b + c*c) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((a==b) && (b==c)) {
            printf("TRIANGULO EQUILATERO\n");
        } else {
            if ((a==b)||(b==c)||(c==a)) {
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }

    return 0;
}