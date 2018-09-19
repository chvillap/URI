// https://www.urionlinejudge.com.br/judge/en/problems/view/1534

#include <stdio.h>

int main()
{
    int N;
    int A[70][70];
    int i, j, pos1, pos2;

    while (scanf("%d", &N) != EOF) {
        for (i = 0, pos1 = 0, pos2 = N - 1; i < N; ++i, ++pos1, --pos2) {
            for (j = 0; j < N; ++j)
                A[i][j] = 3;
            A[i][pos1] = 1;
            A[i][pos2] = 2;

            for (j = 0; j < N; ++j)
                printf("%d", A[i][j]);
            putchar('\n');
        }
    }

    return 0;
}
