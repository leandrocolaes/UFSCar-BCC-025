#include <stdio.h>
#include <string.h>
 
int main() {
    char gabarito[11], resposta[11];
    int nalunos, nota;

    scanf("%s", gabarito);
    scanf("%d", &nalunos);

    for (int i = 0; i < nalunos; i++) {
        nota = 0;
        scanf("%s", resposta);
        for (int j = 0; j < 10; j++){
            if(resposta[j] == gabarito[j]){
                nota += 1;
        }
        }
        
        printf("%d\n", nota);
    }
    return 0;
}