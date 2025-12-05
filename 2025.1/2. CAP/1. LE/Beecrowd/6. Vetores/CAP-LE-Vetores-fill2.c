#include <stdio.h>

int main(){
    int v[1000], t;
    scanf("%d", &t);
    for (int i = 0; i < 1000; i+= t){
        for (int j = 0; j < t; j++){
            if(j+i > 999) {
              break;  
            }
            printf("N[%d] = %d\n", j+i, j);
        }
    }
    
    return 0;
}
