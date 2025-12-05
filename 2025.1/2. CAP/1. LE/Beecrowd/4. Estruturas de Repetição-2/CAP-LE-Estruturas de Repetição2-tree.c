#include <stdio.h>

int main()
{
    int n, h, d, g, v;
    
    scanf("%d", &n);

    for(; n > 0; n--){
        v = 0;
        scanf("%d", &h);
        scanf("%d", &d);
        scanf("%d", &g);

        if ((h >= 200)&&(h<=300)) {
            v += 1;
            if (d >= 50) {
                v += 1;
                if (g >= 150){
                    v += 1;
                }
            }
        }
        if (v == 3) {
            printf("Sim\n");
        } else {
            printf("Nao\n");
        }
    }
    return 0;
}