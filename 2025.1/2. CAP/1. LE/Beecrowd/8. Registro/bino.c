#include <stdio.h>
 
int main() {
    int n, l;
    
    typedef struct {
        int n;
        int t;
    } mult;

    mult v2 = {2, 0};
    mult v3 = {3, 0};
    mult v4 = {4, 0};
    mult v5 = {5, 0};

    scanf("%d", &n);
    for (; n > 0; n--){
        scanf("%d", &l);
        if (l%v2.n == 0){
            v2.t++;
            if (l%v4.n == 0){
                v4.t++;
            }
        }
        if (l%v3.n == 0){
            v3.t++;
        }

        if (l%v5.n == 0){
            v5.t++;
        }
    }
    printf("%d Multiplo(s) de 2\n", v2.t);
    printf("%d Multiplo(s) de 3\n", v3.t);
    printf("%d Multiplo(s) de 4\n", v4.t);
    printf("%d Multiplo(s) de 5\n", v5.t);
    return 0;
}