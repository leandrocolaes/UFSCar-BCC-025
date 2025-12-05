#include <stdio.h>
 
int main() {
    int i, p;
    float n, media;
    media = 0;
    p = 0;

    for (i = 0; i < 6; i++) {
        scanf("%f", &n);
        if (n >= 0) {
            p++;
            media = media + n;
        }
        
    }

    printf("%d valores positivos\n", p);
    printf("%.1f\n", media/p);
    return 0;
}