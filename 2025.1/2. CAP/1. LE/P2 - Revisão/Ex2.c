#include <stdio.h>
 
int main() {
    int v[10], temp;

    for (int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 5; i++){
        temp = v[i];
        v[i] = v[9-i];
        v[9-i] = temp;
    }
    for (int i = 0; i < 10; i++){
        if (i == 9){
            printf("%d\n", v[i]);
        } else {
            printf("%d ", v[i]);
        }
    }
    return 0;
}