#include <stdio.h>

int main(){
    float s, ns, tax;
    ns = 0;
    scanf("%f", &s);
    if((s >= 0)&&(s <= 2000)){
        printf("Isento\n");
    } else {
        if (s <= 3000) {
            ns += (s-2000)*0.08;
        } else {
            if(s <= 4500) {
                ns += (s-3000)*0.18 + 1000*0.08;
            } else {
                ns += (s-4500)*0.28 + 1500*0.18 + 1000*0.08;
            }
            printf("%.2f\n", ns);
        }
    }
    
    return 0;
}