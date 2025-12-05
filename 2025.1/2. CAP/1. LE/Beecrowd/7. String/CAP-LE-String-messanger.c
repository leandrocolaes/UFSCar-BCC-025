#include <stdio.h>
 
int main() {
    char dec[28];
    int n, index;

    while (scanf(" %s", &dec) != EOF){
        scanf("%d", &n);
        for (; n > 0; n--){
            scanf("%d", &index);
            printf("%c", dec[index-1]);
        }
        printf("\n");   
    }
    

    
    return 0;
}