#include <stdio.h>
 
int trocar (int *n, int *m){
    int temp = *n;
    *n = *m;
    *m = temp;
}

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d %d\n", a , b);

    trocar (&a, &b);
    printf("%d %d\n", a , b);
    return 0;
}

