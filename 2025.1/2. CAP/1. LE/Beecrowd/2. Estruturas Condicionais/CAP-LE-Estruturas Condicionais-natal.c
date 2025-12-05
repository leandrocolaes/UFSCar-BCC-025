#include <stdio.h>
 
int main() {
    int b, g, bn;
    scanf("%d %d", &b, &g);

    bn = g/2;
    if (b >= bn) {
        printf("Amelia tem todas bolinhas!\n");
    } else {
        printf("Faltam %d bolinha(s)\n", bn-b);
    }
 
    return 0;
}