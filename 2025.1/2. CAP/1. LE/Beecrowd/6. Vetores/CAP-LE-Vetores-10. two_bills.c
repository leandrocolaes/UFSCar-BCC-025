#include <stdio.h>

int main(){
    int n,m, v;
    int bill[6] = {2, 5, 10, 20, 50, 100};
    v = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    while ((n != 0) && (m != 0)){
        

        for (int i = 0; i < 6; i++){
            for (int j = 0; j < 6; j++){
                if ((m-n) == bill[j]+bill[i]){
                    v = 1;
                }
            }
        }
        if (v){
            printf("possible\n");
        } else {
            printf("impossible\n");
        }
        v = 0;
        scanf("%d", &n);
        scanf("%d", &m);
    }
    
    return 0;
}
