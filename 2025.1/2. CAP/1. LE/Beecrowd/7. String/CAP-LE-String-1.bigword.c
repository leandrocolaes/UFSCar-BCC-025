#include <stdio.h>
#include <string.h>
 
int main() {
    char word[50];

    scanf("%s", word);
    if (strlen(word) >= 10) {
        printf("palavrao\n");
    } else {
        printf("palavrinha\n");
    }
    return 0;
}