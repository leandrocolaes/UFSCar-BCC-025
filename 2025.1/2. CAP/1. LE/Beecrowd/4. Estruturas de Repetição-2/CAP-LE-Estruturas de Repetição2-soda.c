#include <stdio.h>

int main()
{
    int e, f, c, m, total;
    m = 0;
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &c);
    total = e+f;
    while (total >= c) {
        m += total/c;
        total = total/c + total%c;
    }
    printf("%d\n", m);

    return 0;
}