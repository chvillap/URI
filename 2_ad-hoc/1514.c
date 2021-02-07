// https://www.urionlinejudge.com.br/judge/en/problems/view/1514

#include <stdio.h>

int main()
{
    int N, M;
    int i, j, X[100][100];
    int sumi, sumj;
    int c1, c2, c3, c4;

    while (1) {
        scanf("%d%d", &N, &M);
        if (!(N || M))
            break;

        c1 = c2 = c3 = c4 = 1;

        for (i = 0; i < N; ++i) {
            for (j = 0, sumi = 0; j < M; ++j) {
                scanf("%d", &X[i][j]);
                sumi += X[i][j];
            }

            if (c1 && sumi == M)
                c1 = 0;
            if (c4 && !sumi)
                c4 = 0;
        }

        for (j = 0; j < M; ++j) {
            for (i = 0, sumj = 0; i < N; ++i)
                sumj += X[i][j];

            if (c2 && !sumj)
                c2 = 0;
            if (c3 && sumj == N)
                c3 = 0;
        }

        printf("%d\n", c1 + c2 + c3 + c4);
    }

    return 0;
}
