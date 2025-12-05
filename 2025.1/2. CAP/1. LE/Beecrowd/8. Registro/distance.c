#include <stdio.h>
#include <math.h>

int main() {
    double d;
    typedef struct {
        double x, y;
    } value;

    value n1, n2;
    scanf("%lf%lf", &n1.x, &n1.y);
    scanf("%lf%lf", &n2.x, &n2.y);

    d = sqrt((n2.x-n1.x)*(n2.x-n1.x) + (n2.y-n1.y)*(n2.y-n1.y));

    printf("%.4lf\n", d);
    return 0;
}