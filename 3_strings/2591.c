// https://www.urionlinejudge.com.br/judge/en/problems/view/2591

#include <stdio.h>

int main()
{
    int C, a1, a2, i;
    char hame[201];

    scanf("%d", &C);

    while (C) {
        scanf("%s", hame);

        i = 1;
        a1 = 0;
        while (hame[i++] == 'a')
            ++a1;

        i += 2;
        a2 = 0;
        while (hame[i++] == 'a')
            ++a2;

        putchar('k');
        for (i = 0; i < a1 * a2; ++i)
            putchar('a');
        putchar('\n');

        --C;
    }

    return 0;
}
