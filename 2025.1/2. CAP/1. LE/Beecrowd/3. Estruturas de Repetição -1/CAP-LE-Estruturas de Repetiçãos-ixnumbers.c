#include <stdio.h>
 
int main() {
    int n, i, a;
    scanf("%d", &n);
    if (n % 2 == 0) {
        a = 1;
    } else {
        a = 0;
    }
    for (i = n+a; i < n+12; i += 2){
        printf("%d\n", i);
    }
 
    return 0;
}