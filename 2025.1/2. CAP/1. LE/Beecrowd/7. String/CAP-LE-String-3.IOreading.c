#include <stdio.h>
 
int main() {
    char name[33];

    for (int i = 0; i < 10; i++) {
        scanf("%s", name);
        if ((i == 6) || (i == 2) || (i == 8)){
            printf("%s\n", name);
        }
    }
    return 0;
}