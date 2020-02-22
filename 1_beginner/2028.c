// https://www.urionlinejudge.com.br/judge/en/problems/view/2028

#include <stdio.h>

int main()
{
    int N, length, i, j, n;

    i = 1;
    while (scanf("%d", &N) != EOF) {
        if (!N)
            length = 1;
        else if (N < 3)
            length = 2 * N;
        else
            length = 1 + (N * (1 + N) / 2);

        if (length == 1)
            printf("Caso %d: %d numero\n", i, length);
        else
            printf("Caso %d: %d numeros\n", i, length);

        putchar('0');
        for (n = 1; n <= N; ++n) {
            for (j = 0; j < n; ++j)
                printf(" %d", n);
        }
        puts("\n");

        ++i;
    }

    return 0;
}
