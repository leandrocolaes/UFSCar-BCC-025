#include <stdio.h>
#include <string.h>
 
int main() {
    int n;

    typedef struct {
        char nome[32];
        char choose[7];
        int num;
    } player;

    scanf("%d%*c", &n);
    player s1, s2;

    for (; n > 0; n--){
        scanf(" %s", s1.nome);
        scanf(" %s", s1.choose);

        scanf(" %s", s2.nome);
        scanf(" %s", s2.choose);

        scanf("%d%*c", &s1.num);
        scanf("%d%*c", &s2.num);

        if ((s1.num+s2.num)%2 == 0){
            if (strcmp(s1.choose, "PAR") == 0){
                printf("%s\n", s1.nome);
            } else {
                printf("%s\n", s2.nome);
            }
                
        } else {
            if (strcmp(s1.choose, "IMPAR") == 0){
                printf("%s\n", s1.nome);
            } else {
                printf("%s\n", s2.nome);
            }
        }

    }

    return 0;
}