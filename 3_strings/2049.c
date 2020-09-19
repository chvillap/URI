// https://www.urionlinejudge.com.br/judge/en/problems/view/2049

#include <stdio.h>
#include <string.h>

int main()
{
    char signature[1000001];
    char data[3000001];
    int h = 1;

    while (1) {
        scanf("%s", signature);
        if (!strcmp(signature, "0"))
            break;

        if (h > 1)
            putchar('\n');

        scanf("%s", data);

        printf("Instancia %d\n", h);
        if (strstr(data, signature) != NULL)
            puts("verdadeira");
        else
            puts("falsa");

        ++h;
    }

    return 0;
}
