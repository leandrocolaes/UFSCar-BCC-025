#include <stdio.h>
 
int main() {
    int num, *p, cont = 0;

    p = (int*) malloc(10*sizeof(int));
    scanf("%d", &num);

    while(num != 0){
        if ((cont)%10 == 0){
            p = (int *) realloc(p, (cont+11)*sizeof(int));  
        }

        p[cont] = num;
        cont++; 
        
        scanf("%d", &num);
    }

    for (int i = 0; i < (cont); i++){
        printf("%d\n", p[i]);
    }
    free(p);
    return 0;
}