#include <stdio.h>
 
int main() {
   char n[20];
    int v = 0;

    scanf(" %s", &n);
    for (int i = 0; i < strlen(n)-1; i++) {
        if((n[i] == '1') && (n[i+1] == '3')){
            v = 1;
        }
    }
    if (v){
        printf("%s es de Mala Suerte\n", n);
    } else {
        printf("%s NO es de Mala Suerte\n", n);
    }
    
    return 0;
}