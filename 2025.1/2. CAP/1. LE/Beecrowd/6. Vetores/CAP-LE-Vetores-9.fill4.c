    #include <stdio.h>

    int main(){
        int x, p, ip;
        p = 0;
        ip = 0;
        for (int i = 0; i < 15; i++){
            scanf("%d", &x);
            if (x % 2 == 0){
                if (p == 5 ){
                    p = 0;
                    printf("par[%d] = %d\n", p, x);
                } else {
                    printf("par[%d] = %d\n", p, x);
                    p += 1;
                    
                } 
            }else {
                    if (ip == 5 ){
                        ip = 0;
                        printf("impar[%d] = %d\n", ip, x);
                    } else {
                        printf("impar[%d] = %d\n", ip, x);
                        ip += 1;
                }
            }
        }
        
        return 0;
    }
