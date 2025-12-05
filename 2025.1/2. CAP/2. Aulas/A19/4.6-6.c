#include <stdio.h>
 
int main() {
    int *p1, *p2;
    int v1, v2;

    v1 = 2;
    v2 = 4;
    p1 = &v1;
    p2 = &v2;

    if (*p1 <= *p2){
        *p1 *= 2;
    } else {
        *p2 *= 2;
    }

    printf("%d %d\n", *p1, *p2);

    return 0;
}