#include <stdio.h>

int main(){
    int v[4];

    scanf("%d", &v[0]);
    scanf("%d", &v[1]);
    scanf("%d", &v[2]);
    scanf("%d", &v[3]);
    
    for (int i = 0; i < 4; i++) {
        if (v[i] == 1){
            printf("%d\n", i+1);
        }
    }
    return 0;
}
