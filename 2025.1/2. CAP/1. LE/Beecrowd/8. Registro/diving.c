#include <stdio.h>
 
int main() {
    int n;
    float ponto, soma, menor, maior;
    typedef struct {
        char name[52];
        float d, score[7];
    } player;

    scanf("%d", &n);
    player p[n];
    for (int i = 0; i < n; i++){
        scanf(" %s", p[i].name);
        scanf("%f", &p[i].d);
        soma = 0;
        ponto = 0;

        for (int a = 0; a < 7; a++){
            scanf("%f", &p[i].score[a]);
            if (a == 0){
                menor = p[i].score[a];
                maior = p[i].score[a];
            }
            
            if (menor > p[i].score[a]) {
                menor = p[i].score[a];
            }
            if (maior < p[i].score[a]) {
                maior = p[i].score[a];
            }
            soma += p[i].score[a];
        }
        soma -= maior + menor;
        ponto = soma* p[i].d;
        printf("%s %.2f\n", p[i].name, ponto);
    }
    return 0;
}