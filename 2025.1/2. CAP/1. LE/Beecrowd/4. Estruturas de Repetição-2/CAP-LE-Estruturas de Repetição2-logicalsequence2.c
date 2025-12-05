#include <stdio.h>

int main()
{
    int i,j, x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    for (j = 1; j <= y-x+1; j += x){
        for (i = j; i < j+x; i ++){
            if(i == j+x-1){
                printf("%d\n", i);
            } else {
                printf("%d ", i);
            }
            
        }

    }
    return 0;
}