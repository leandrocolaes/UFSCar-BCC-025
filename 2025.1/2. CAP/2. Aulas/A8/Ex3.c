#include <stdio.h>
#include <math.h>
//Overflow
int main()
{
    int x;
    short int y;
    x = pow(2,31) - 1;
    y = pow(2, 15) - 1;
    printf("x = %d\ny = %hd\n", x, y);

    x = x + 1;
    y = y + 1;

    printf("x = %d\ny = %hd\n", x, y);
    return 0;
}