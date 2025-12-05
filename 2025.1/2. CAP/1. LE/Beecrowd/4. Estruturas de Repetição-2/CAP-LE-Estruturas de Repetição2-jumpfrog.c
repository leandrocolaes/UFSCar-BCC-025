#include <stdio.h>
#include <math.h>

int main()
{
    int p, n, v, a, b, i;
    scanf("%d", &p);
    scanf("%d", &n);
    v = 0;

    scanf("%d", &a);
    n--;
    while(n > 0){
        scanf("%d", &b);
        if (abs(a-b) > p){
            v = 1;
        } 
        a = b;
        n--;
    }
    if (v) {
        printf("GAME OVER\n");
    } else {
        printf("YOU WIN\n");
    }

    return 0;
}