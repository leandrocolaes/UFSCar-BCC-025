#include <stdio.h>
 
int main() {
    FILE *f, g;
    f = fopen("ex1.txt", "r");
    g = fopen("paste.txt", "a");
    while (fscanf(f, "%d", &n)!= EOF){
        fprintf(g, "%d\n", n);
    }
    return 0;
}