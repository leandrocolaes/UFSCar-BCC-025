#include <stdio.h>

int main (){
int n = 5;

for (int i = 1; i <= n; i++){
    int j = 1;
    while (j <= n){
        printf("%d\n", i-j);
        j += 2;
    }

}


return 0;
}
