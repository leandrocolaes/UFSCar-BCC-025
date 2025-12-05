#include <stdio.h>

int main() {
    int n, hour, min, sec;
    hour = 0;
    min = 0;
    sec = 0;

    scanf("%d", &n);
    hour = n / (60*60);
    min = (n - hour*60*60)/60;
    sec = n - hour*60*60 - min*60;
    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}