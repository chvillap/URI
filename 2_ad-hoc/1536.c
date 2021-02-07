// https://www.urionlinejudge.com.br/judge/pt/problems/view/1536

#include <stdio.h>

int main()
{
    int N, M, V;
    int i, g11, g12, g21, g22;
    int p1, p2, winner;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        p1 = p2 = winner = 0;
        scanf("%d x %d\n%d x %d", &g11, &g21, &g22, &g12);

        if (g11 > g21)
            p1 = 3;
        else if (g11 < g21)
            p2 = 3;

        if (g12 > g22)
            p1 += 3;
        else if (g12 < g22)
            p2 += 3;
        
        if (p1 > p2)
            winner = 1;
        else if (p1 < p2)
            winner = 2;
        else {
            if (g11 + g12 > g21 + g22)
                winner = 1;
            else if (g11 + g12 < g21 + g22)
                winner = 2;
            else if (g12 > g21)
                winner = 1;
            else if (g21 > g12)
                winner = 2;
        }

        if (!winner)
            puts("Penaltis");
        else
            printf("Time %d\n", winner);
    }

    return 0;
}
