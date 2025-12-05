#include <stdio.h>
 
int main() {
    int n;
    int d = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            d++;
        }
    }

    if ((d == 2)&&(n > 0)){
        printf("primo\n");
    } else {
        printf("nao\n");
    }
    return 0;
}