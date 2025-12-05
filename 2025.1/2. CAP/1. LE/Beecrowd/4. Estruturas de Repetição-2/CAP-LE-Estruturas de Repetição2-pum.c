#include <stdio.h>

int main()
{
    int i,j, m;
    scanf("%d", &m);
    for (j = 0; j < m*4-1; j += 4){
        for (i = j+1; i < j+ 4; i++){
            printf("%d ", i);
        }
        printf("PUM\n");
    }
    
    return 0;
}