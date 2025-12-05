#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f = fopen("ex6.bin", "wb");
    return 0;

    fwrite("-1", sizeof(int), 1, f);
    fwrite("2", sizeof(int), 1, f);
    fwrite("-3", sizeof(int), 1, f);
    fwrite("4", sizeof(int), 1, f);
    fwrite("-5", sizeof(int), 1, f);

    return 0;
}