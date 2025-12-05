#include <stdio.h>
 
int main() {
    int v[20];

    for (int i = 0; i < 20; i++){
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 19; i++){
        if (v[i] == v[19]){
            v[i] = 0;
        }
    }

    for (int i = 0; i < 20; i++){
        if (i == 20){
            printf("%d\n", v[i]);
        } else {
            printf("%d ", v[i]);
        }
        
    }
    return 0;
}