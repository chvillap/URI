// https://www.urionlinejudge.com.br/judge/en/problems/view/1145

#include <stdio.h>

int main()
{
    int x, y, i;

    scanf("%d%d", &x, &y);

    for (i = 1; i <= y; ++i) {
        printf("%d", i);

        if (i && !(i % x))
            putchar('\n');
        else
            putchar(' ');
    }

    return 0;
}
