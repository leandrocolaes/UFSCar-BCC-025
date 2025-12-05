#include <stdio.h>

int main() {
    int m, n, soma, i;
    scanf("%d", &m);
    scanf("%d", &n);
    
    while ((m > 0) && (n > 0)){
        
        soma = 0;
        if (m > n) {
            for (i = n; i <= m; i++){
                printf("%d ", i);
                soma += i;
            }
        } else {
            for (i = m; i <= n; i++){
                printf("%d ", i);
                soma += i;
            }

        }
        printf("Sum=%d\n", soma);
        scanf("%d", &m);
        scanf("%d", &n);
        
    }
    return 0;
}