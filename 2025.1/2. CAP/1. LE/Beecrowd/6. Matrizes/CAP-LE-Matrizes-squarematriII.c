#include <stdio.h>
#include <math.h>

int main(){
    int i, j, n, d, max, ele;
    scanf("%d", &n);
    while (n != 0) {
        max = pow(2, n-1)*pow(2, n-1);
        d = 0;
        while (max > 0) {
            max % 10;
            max = max/10;
            d++;
        }

        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                if (j == 0){
                    printf("%*.lf", d, pow(2, i)*pow(2, j));
                } else {
                    printf(" %*.lf", d, pow(2, i)*pow(2, j));
                }
                
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}
