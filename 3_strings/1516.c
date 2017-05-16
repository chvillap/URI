// https://www.urionlinejudge.com.br/judge/en/problems/view/1516

#include <stdio.h>

int main()
{
    int N, M, A, B;
    int i, j, ii, jj, rAN, rBM;
    char image[50][51];
    char scaled[100][101];

    while (1) {
        scanf("%d%d", &N, &M);

        if (!N && !M)
            break;

        for (i = 0; i < N; ++i)
            scanf("%s", image[i]);

        scanf("%d%d", &A, &B);

        rAN = A / N;
        rBM = B / M;

        for (i = 0; i < A; ++i) {
            for (j = 0; j < B; ++j)
                scaled[i][j] = image[i / rAN][j / rBM];
            scaled[i][j] = '\0';

            puts(scaled[i]);
        }
        putchar('\n');
    }

    return 0;
}
