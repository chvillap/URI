// https://www.urionlinejudge.com.br/judge/en/problems/view/2222

#include <stdio.h>
#include <string.h>

int main()
{
    int tc, N;

    scanf("%d", &tc);

    while (scanf("%d", &N) != EOF) {
        int M[10001];
        int x, X[10001][61];
        int Q, op, x1, x2;
        int i, j;

        for (i = 1; i <= N; ++i) {
            memset(X[i], 0, 61 * sizeof(int));

            scanf("%d", &M[i]);
            for (j = 1; j <= M[i]; ++j) {
                 scanf("%d", &x);
                 X[i][x] = 1;
            }
        }

        scanf("%d", &Q);
        for (i = 0; i < Q; ++i) {
            int sum = 0;

            scanf("%d%d%d", &op, &x1, &x2);

            if (op == 1) {
                for (j = 1; j <= 60; ++j)
                    sum += X[x1][j] && X[x2][j];
            } else {
                for (j = 1; j <= 60; ++j)
                    sum += X[x1][j] || X[x2][j];
            }

            printf("%d\n", sum);
        }

        --tc;
    }

    return 0;
}
