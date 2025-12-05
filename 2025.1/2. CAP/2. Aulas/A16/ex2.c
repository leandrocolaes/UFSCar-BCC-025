#include <stdio.h>
 
int main() {
    struct aluno {
        int num_aluno;
        float notas[3];
        float media;
    };
    struct aluno sala[10];

    for (int i = 0; i < 10; i++){
        printf("num_aluno %d\n", i);
        scanf("%d", &sala[i].num_aluno);
        for (int o = 0; o < 3; o++){
            scanf("%f", &sala[i].notas[0]);
        }
        sala[i].media = (a[i].nota[0]  + a[i].nota[1] + a[i].nota[2])/3;
    }

    for (int i = 0; i < 10; i++){
        printf("num_aluno: %d\n", i);
        printf("%d", sala[i].num_aluno);
        for (int o = 0; o < 3; o++){
            printf("nota: %d %d ", o, i);
            printf("%f", sala[i].notas[o]);
            printf("\n");
        }
        printf("media: ");
        printf("%f", sala[i].media);
        printf("\n");
    }

    return 0;
}