// https://www.urionlinejudge.com.br/judge/en/problems/view/1874

#include <stdio.h>

int main()
{
    int M, P, F;
    int B[100][100], Q[100];
    int i, j, head;

    while(1) {
        scanf("%d%d%d", &M, &P, &F);
        if (!(M || P || F))
            break;

        for (i = 0; i < M; ++i)
            for (j = 0; j < P; ++j)
                scanf("%d", &B[i][j]);

        for (i = 0; i < F; ++i)
            scanf("%d", &Q[i]);

        head = 0;
        for (j = P - 1; j >= 0 && head < F; --j)
            for (i = M - 1; i >= 0 && head < F; --i)
                if (!B[i][j])
                    B[i][j] = Q[head++];

        for (i = 0; i < M; ++i) {
            for (j = 0; j < P - 1; ++j)
                printf("%d ", B[i][j]);
            printf("%d", B[i][P - 1]);
            putchar('\n');
        }
    }

    return 0;
}
