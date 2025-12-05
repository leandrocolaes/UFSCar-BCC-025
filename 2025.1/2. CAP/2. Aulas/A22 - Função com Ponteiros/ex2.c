#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void arrays (int *v){
    srand(time(NULL));
    for (int i = 0; i < 100; i++){
        v[i] = rand() % 100;
        printf("%d ", v[i]);
    }
}
int main() {
    int v[100];

    arrays(v);

    return 0;
}