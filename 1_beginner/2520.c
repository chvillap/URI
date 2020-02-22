// https://www.urionlinejudge.com.br/judge/en/problems/view/2520

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    int i, j, v, pi, pj, ai, aj, remaining;

    while (scanf("%d%d", &N, &M) !=  EOF) {
        remaining = 2;

        for (i = 1; i <= N; ++i)
            for (j = 1; j <= M; ++j) {
                scanf("%d", &v);

                if (remaining) {
                    if (v == 1) {
                        pi = i;
                        pj = j;
                        --remaining;
                    } else if (v == 2) {
                        ai = i;
                        aj = j;
                        --remaining;
                    }
                }
            }

        printf("%d\n", abs(ai - pi) + abs(aj - pj));
    }

    return 0;
}