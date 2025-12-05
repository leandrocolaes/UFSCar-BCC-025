#include <stdio.h>
#include <string.h>
 
int main() {
    int n = 2;
    int mai, mei;
    float media,menor, maior;
    menor = 10;
    maior = 0;
    char nome[52];
    typedef struct {
        int ra;
        float nota[2];
        float media;
        char nome[52];
    }   aluno;
    
    aluno a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i].ra);
        getchar();
        fgets(a[i].nome, 52, stdin);
        a[i].nome[strlen(a[i].nome)-1] = "\0";

        scanf("%f", &a[i].nota[0]);
        scanf("%f", &a[i].nota[1]);
        a[i].media = (a[i].nota[0]+a[i].nota[1])/2;

        if (menor > a[i].media){
            mei = i;
            menor = a[i].media;
        }
        if (maior < a[i].media){
            mai = i;
            maior = a[i].media;
        }
    }
    printf("Menor média: %d %s %.1f\n", a[mei].ra, a[mei].nome, a[mei].media);
    printf("Maior média: %d %s %.1f\n", a[mai].ra, a[mai].nome, a[mai].media);
    return 0;
}