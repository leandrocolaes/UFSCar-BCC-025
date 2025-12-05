#include <stdio.h>
 
int main() {
    int n;
    float maior = 0;
    int mid = 0;
    typedef struct {
        int id;
        float nota;
    } aluno;
    scanf("%d", &n);
    for (; n > 0; n--){
        aluno l1;
        scanf("%d", &l1.id);
        scanf("%f", &l1.nota);
        if ((l1.nota >= 8) && (maior < l1.nota)){
                maior = l1.nota;
                mid = l1.id; 
        }
    }

    if (maior == 0){
        printf("Minimum note not reached\n");
    } else {
        printf("%d\n", mid);
    }
    
    return 0;
}