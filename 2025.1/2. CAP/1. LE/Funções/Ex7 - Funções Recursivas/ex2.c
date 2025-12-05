#include <stdio.h>
 
int ex2(char s[], int n){
    if ((n == 0)|(n == 1)){
        return 1;
    } else {
        if (s[0] == s[n-1]){
            return 1*(ex2(&s[1], n-2));
        } else {
            return 0;
        }
    }
}

int main() {
    char s[4] = "anaa";

    printf("%d\n", ex2(s, 4));
    return 0;
}