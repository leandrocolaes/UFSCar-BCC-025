#include <stdio.h>
#include <string.h>
 
int main() {
    int n, menor;
    char pm[52];
    typedef struct {
        char nome[52];
        int a, t;
    } planeta;
    do {
        scanf("%d", &n);
        planeta p1[n];
        for (int i = 0; i < n; i++){
            scanf(" %s",p1[i].nome );
            scanf("%d", &p1[i].a);
            scanf("%d", &p1[i].t);
            if (i == 0){
                menor  = p1[i].a - p1[i].t;
                strcpy(pm, p1[i].nome);
            }
            if (menor > (p1[i].a - p1[i].t)) {
                menor = p1[i].a - p1[i].t;
                strcpy(pm, p1[i].nome);
            }
        }
        if (n!= 0){
            printf("%s\n", pm);
        }
        
    } while (n != 0);
    return 0;
}