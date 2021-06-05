// https://www.urionlinejudge.com.br/judge/en/problems/view/1715

#include <stdio.h>
#include <string.h>

int main()
{
    int N, M, X[101];
    int i, j, counts[101], players;

    while (scanf("%d%d", &N, &M) != EOF) {
        players = 0;
        memset(counts, 0, sizeof(counts));

        for (i = 0; i < N; ++i) {
            for (j = 0; j < M; ++j) {
                scanf("%d", &X[j]);
                counts[i] += (X[j] > 0);
            }
            if (counts[i] == M)
                ++players;
        }

        printf("%d\n", players);
    }

    return 0;
}
