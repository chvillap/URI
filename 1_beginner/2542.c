// https://www.urionlinejudge.com.br/judge/en/problems/view/2542

#include <stdio.h>

int main()
{
    int N, M, L, Cm, Cl, A;
    int i, j, Mdeck[100][100], Ldeck[100][100];

    while (scanf("%d", &N) != EOF) {
        scanf("%d%d", &M, &L);

        for (i = 0; i < M; ++i) {
            for (j = 0; j < N; ++j)
                scanf("%d", &Mdeck[i][j]);
        }

        for (i = 0; i < L; ++i) {
            for (j = 0; j < N; ++j)
                scanf("%d", &Ldeck[i][j]);
        }

        scanf("%d%d%d", &Cm, &Cl, &A);

        if (Mdeck[Cm - 1][A - 1] > Ldeck[Cl - 1][A - 1])
            puts("Marcos");
        else if (Mdeck[Cm - 1][A - 1] < Ldeck[Cl - 1][A - 1])
            puts("Leonardo");
        else
            puts("Empate");
    }

    return 0;
}