#include <stdio.h>
 
int main() {
    int c, p, f;
    scanf("%d %d %d", &c, &p, &f);

    if (c*f > p) {
        printf("N\n");
    } else {
        printf("S\n");
    }
    return 0;
}