#include <stdio.h>
 
int main() {
    printf("%d\n", fatorial(-1));
    return 0;
}

long long fatorial (long long n){
    if (n < 0){
       return -1;
    } else {
        if (n == 0){
            return 1;
        } else {
            return n*fatorial(n-1);
        }
    }

}