// https://www.urionlinejudge.com.br/judge/en/problems/view/1146

#include <stdio.h>

int main()
{
    int X, i;

    while (1) {
        scanf("%d", &X);
        if (!X)
            break;

        putchar('1');
        for (i = 2; i <= X; ++i)
            printf(" %d", i);
        putchar('\n');
    }

    return 0;
}
