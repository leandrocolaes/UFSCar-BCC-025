    #include <stdio.h>
    
    int main() {
        char n1[103];
        char n2[103];
        char n3[103];

        fgets(n1, 103, stdin);
        n1[strlen(n1)-1] = "\0";
        fgets(n2, 103, stdin);
        n2[strlen(n2)-1] = "\0";
        fgets(n3, 103, stdin);
        n3[strlen(n3)-1] = "\0";
        
        printf("%s%s%s\n", n1, n2, n3);
        printf("%s%s%s\n", n2, n3, n1);
        printf("%s%s%s\n", n3, n1, n2);
        printf("%.10s%.10s%.10s\n", n1, n2, n3);

        return 0;
}