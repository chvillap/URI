// https://www.urionlinejudge.com.br/judge/en/problems/view/1478

#include <stdio.h>

int main()
{
    int N, i, j, v;
    int A[100][100];

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        for (i = 0; i < N; ++i) {
            for (j = i, v = 1; j < N /*v <= N - i*/; ++j, ++v)
                A[i][j] = A[j][i] = v;
        }

        for (i = 0; i < N; ++i) {
            printf("%3d", A[i][0]);
            for (j = 1; j < N; ++j)
                printf(" %3d", A[i][j]);
            putchar('\n');
        }
        putchar('\n');
    }

    return 0;
}
