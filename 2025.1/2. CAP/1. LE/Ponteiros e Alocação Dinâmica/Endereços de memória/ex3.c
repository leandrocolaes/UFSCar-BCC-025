#include <stdio.h>
 
int main() {
    char texto[20] = "Algoritmos";
    char *p, *pm;

    p = texto;
    pm = &texto[0];
    printf("%p %p\n", p, pm);
    return 0;
}