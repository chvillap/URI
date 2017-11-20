// https://www.urionlinejudge.com.br/judge/en/problems/view/1113

#include <stdio.h>

int main()
{
    while (1) {
        int X, Y;

        scanf("%d%d", &X, &Y);
        if (X == Y)
            break;

        if (X < Y)
            puts("Crescente");
        else
            puts("Decrescente");
    }

    return 0;
}
