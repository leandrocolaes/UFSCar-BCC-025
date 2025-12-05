        #include <stdio.h>
        #include <string.h>
        
        int main() {
            int n, i;
            typedef struct {
                int matricula;
                char sobrenome[50];
                int ano;
            } alunos;

            scanf("%d", &n);
            alunos *p = (alunos*) malloc(n * sizeof(alunos));

            for (i = 0; i < n; i++){
                scanf("%d", &p[i].matricula);
                while ((getchar())!= '\n');
                fgets(p[i].sobrenome, 50, stdin);
                p[i].sobrenome[strlen(p[i].sobrenome) - 1] = '\0';
                scanf("%d", &p[i].ano);
            }

            for (i = 0; i < n; i++){
                printf("%d\n", p[i].matricula);
                printf("%s\n", p[i].sobrenome);
                printf("%d\n", p[i].ano);
            }
            return 0;
        }