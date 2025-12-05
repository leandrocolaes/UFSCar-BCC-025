#include <stdio.h>
//Hello World
int main()
{
    int x;
    float y;
    char c;
    x = 10;
    y = 5.4;
    c = 'a';

    printf("x = %d y = %3.1f c = %c \n", x,y,c);
    printf("Endereço de x = %p", &x);

    return 0;
}