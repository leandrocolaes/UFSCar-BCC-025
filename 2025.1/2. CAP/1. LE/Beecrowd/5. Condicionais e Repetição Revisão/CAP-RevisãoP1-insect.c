    #include <stdio.h>

    int main()
    {
        int c, n;
        scanf("%d", &c);
        for (; c >0; c--) {
            scanf("%d", &n);
            if (n > 8000) {
                printf("Mais de 8000!\n");
            } else {
                printf("Inseto!\n");
            }
        }
        return 0;
    }