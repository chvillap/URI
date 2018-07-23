// https://www.urionlinejudge.com.br/judge/en/problems/view/1435

#include <stdio.h>

int min(int a, int b, int c, int d)
{
    if (a <= b && a <= c && a <= d)
        return a;
    if (b <= a && b <= c && b <= d)
        return b;
    if (c <= a && c <= b && c <= d)
        return c;
    return d;
}

int main()
{
    int N, i, j, value;

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        for (i = 0, value = 1; i < N; ++i) {
            value = min(i + 1, N - i, 1, N);
            printf("%3d", value);

            for (j = 1; j < N; ++j) {
                value = min(i + 1, N - i, j + 1, N - j);
                printf(" %3d", value);
            }
            putchar('\n');
        }
        putchar('\n');
    }

    return 0;
}
