// https://www.urionlinejudge.com.br/judge/en/problems/view/2168

#include <stdio.h>

int main()
{
    int N;
    int M[101][101];
    int i, j, k, l;

    scanf("%d", &N);

    for (i = 0; i <= N; ++i)
        for (j = 0; j <= N; ++j)
            scanf("%d", &M[i][j]);

    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j)  {
            int sum1 = 0;
            for (k = i; k <= i + 1; ++k) {
                for (l = j; l <= j + 1; ++l)
                    sum1 += (M[k][l] & 1);
            }
            if (sum1 >= 2)
                putchar('S');
            else
                putchar('U');
        }
        putchar('\n');
    }

    return 0;
}
