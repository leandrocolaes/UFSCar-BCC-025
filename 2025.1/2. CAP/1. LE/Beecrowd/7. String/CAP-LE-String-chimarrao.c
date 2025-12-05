#include <stdio.h>
 
int main() {
    int n, x;
    double  l, q, lq;
    char name[14];
    x = 0;
    scanf("%d", &n);
    scanf("%lf", &l);
    scanf("%lf", &q);

    lq = l;
    while (lq-q > 0){
        lq = lq - q;
        x++;
    }
    x = x % n;

    for (int i = 0; i < n; i++){
        scanf(" %s", &name);
        if (i == x){
            printf("%s %.1lf\n", name, lq);
        }
    }

    

    return 0;
}