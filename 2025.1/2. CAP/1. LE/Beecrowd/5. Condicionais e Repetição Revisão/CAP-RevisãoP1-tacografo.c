#include <stdio.h>

int main()
{
    int n, t, v, d;
    d = 0;
    scanf("%d", &n);
    for (; n > 0; n--) {
        scanf("%d%d", &t, &v);
        d += t*v;
    }

    printf("%d\n", d);
    return 0;
}