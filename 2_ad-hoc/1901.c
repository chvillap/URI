// https://www.urionlinejudge.com.br/judge/en/problems/view/1901

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    int forest[200][200];
    int i, j, k, collected[1001], numSpecies = 0;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j)
            scanf("%d", &forest[i][j]);
    }

    memset(collected, 0, 1001 * sizeof(int));

    for (k = 0; k < N * 2; ++k) {
        scanf("%d%d", &i, &j);

        if (!(collected[forest[i - 1][j - 1]]++))
            ++numSpecies;
    }

    printf("%d\n", numSpecies);

    return 0;
}
