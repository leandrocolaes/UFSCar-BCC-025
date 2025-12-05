#include <stdio.h>

int main()
{
    char t;
    int n , c, v, g;
    scanf("%d", &n);
    g = 0;
    v = 0;
    for (; n > 0; n--){
        scanf(" %c", &t);
        scanf(" %d", &c);
        if (t=='G'){
            v += c;
        } else {
            g += c;
        }
    }

    if (v >= g) {
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    } else {
        printf("A greve vai parar.\n");
    }
    return 0;
}