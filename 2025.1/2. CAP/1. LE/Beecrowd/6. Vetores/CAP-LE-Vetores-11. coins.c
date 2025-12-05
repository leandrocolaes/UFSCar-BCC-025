#include <stdio.h>
#include <math.h>

int main(){
    float notes[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    float coins[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    float n;
    scanf("%f", &n);
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++){
        if (n / notes[i] >= 1){
            printf("%.0f nota(s) de R$ %.2f\n", n/notes[i], notes[i]);
            n =
            n - floor(n / notes[i]) * notes[i];
        }
        printf("%.0f nota(s) de R$ %.2f\n", 0.0, notes[i]);
    
    }
    printf("MOEDAS\n");
    for (int i = 0; i < 6; i++){
        if (n / coins[i] >= 1){
            printf("%.0f moeda(s) de R$ %.2f\n", coins[i], n/coins[i]);
            n =
            n - floor(n / notes[i]) * notes[i];
        }
        printf("%.0f moeda(s) de R$ %.2f\n", 0.0, coins[i]);
}    
    
    return 0;
}
