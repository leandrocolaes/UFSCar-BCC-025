#include <stdio.h>
 
int main() {
    typedef struct
    {
        int rg;
        int ano;
    } dados;

    dados v, v2, *p, *p2;

    p = &v;
    p2 = &v2;

    scanf("%d", &(*p).rg);
    scanf("%d", &(*p).ano);
    scanf("%d", &(*p2).rg);
    scanf("%d", &(*p2).ano);
    
    if ((*p).ano > (*p2).ano){
        printf("%d %d\n", (*p2).rg, (*p2).ano);
    } else {
        printf("%d %d\n", (*p).rg, (*p).ano); 
    }

    return 0;
}