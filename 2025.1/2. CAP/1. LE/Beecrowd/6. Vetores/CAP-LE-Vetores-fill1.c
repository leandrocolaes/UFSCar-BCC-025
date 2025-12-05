    #include <stdio.h>
    #include <math.h>

    int main(){
        int v;
        scanf("%d", &v);
        printf("N[0] = %d\n", v);
        for (int i = 1; i < 10; i++){
            printf("N[%d] = %.0lf\n", i, v*pow(2, i));
        }
        
        return 0;
    }
