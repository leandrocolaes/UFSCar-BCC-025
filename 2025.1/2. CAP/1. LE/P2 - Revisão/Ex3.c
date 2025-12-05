#include <stdio.h>
 
int main() {
    int n = 10;
    int v[n], v1[n], ver;
    ver = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &v1[i]);
    }
    for (int i = 0; i < n; i++){
        if (v[i] != v1[i]){
            ver = 1;
        }
    }
    if (ver) {
        printf("diferentes\n");
    } else {
        printf("iguais\n");
    }
    return 0;
}