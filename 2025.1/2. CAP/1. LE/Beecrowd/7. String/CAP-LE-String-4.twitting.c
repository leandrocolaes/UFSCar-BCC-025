#include <stdio.h>
#include <string.h>
 
int main() {
    char t[503];

    fgets(t, 503, stdin);
    t[strlen(t)-1] = "\0";
    if (strlen(t) > 141){
        printf("MUTE\n");
    } else {
        printf("TWEET\n");
    }
    return 0;
}