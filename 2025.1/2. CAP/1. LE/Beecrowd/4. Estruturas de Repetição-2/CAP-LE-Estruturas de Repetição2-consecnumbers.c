#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d", &a);
    scanf("%d", &n);
    while(n<=0){
        scanf("%d", &n);
    }
    printf("%d\n", n/2*(a+a+n-1));

    return 0;
}