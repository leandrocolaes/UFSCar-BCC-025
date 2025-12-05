#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char s[44];
    int n, cont, v;
    scanf("%d", &n);
    for (; n > 0; n--){
        cont = 0;
        v = 0;
        scanf(" %s", &s);
        for (int i = 0; i < strlen(s); i++){
            if ((tolower(s[i]) == 'a') || (tolower(s[i]) == 'e') || (tolower(s[i]) == 'i') || (tolower(s[i]) == 'o') || (s[i] == 'u')) {
               cont = 0;
            } else {
                cont += 1;
                if (cont >= 3){
                    v = 1;
                }
            }
        }
        if (v) {
            printf("%s nao eh facil\n", s);
        } else {
            printf("%s eh facil\n", s);
        }
    }
    
    return 0;
}