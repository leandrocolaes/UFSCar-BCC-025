#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld", &n);

    for (int i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n",i, n/pow(2, i));
    }
    return 0;
}
