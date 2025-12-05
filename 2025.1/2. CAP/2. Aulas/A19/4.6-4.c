#include <stdio.h>
 
int main() {
    int *n, *m;
    typedef struct 
    {
        int x, y;
    } num;
    
    num a = {1, 2};
    num *p;
    p = &a;
    n = &a.x;
    m = &a.y;

    printf("%p %p %p\n", p, n, m);
    *(n + 1);
    return 0;
}