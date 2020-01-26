// https://www.urionlinejudge.com.br/judge/en/problems/view/1827

#include <stdio.h>

int main()
{
    int N;
    int i, j, beg1, end1, center;

    while (scanf("%d", &N) != EOF) {
        beg1 = N / 3;
        end1 = N - beg1 - 1;
        center = N / 2;

        for (i = 0; i < N; ++i) {
            for (j = 0; j < N; ++j) {
                if (i == center && j == center)
                    putchar('4');
                else if (i >= beg1 && i <= end1 && j >= beg1 && j <= end1)
                    putchar('1');
                else if (i == j)
                    putchar('2');
                else if (i == N - j - 1)
                    putchar('3');
                else
                    putchar('0');
            }
            putchar('\n');
        }
        putchar('\n');
    }

    return 0;
}