#include <stdio.h>
 
int main() {
    unsigned long long int c, d, *p1, *p2;
    c = 1234;
    d = 12345;
    p1 = &c;
    p2 = &d;

    printf("%p %p\n", p1, p2);
    return 0;
}