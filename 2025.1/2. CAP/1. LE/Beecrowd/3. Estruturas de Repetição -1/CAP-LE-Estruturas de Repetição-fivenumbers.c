#include <stdio.h>
 
int main() {
    int n, i, q;
    q = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n); 
        if (n % 2 == 0) {
            q++;
        }
    }

    printf("%d valores pares\n", q);
    return 0;
}