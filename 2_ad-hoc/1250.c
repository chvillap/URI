// https://www.urionlinejudge.com.br/judge/en/problems/view/1250

#include <stdio.h>

int main()
{
    int N, tc;

    scanf("%d", &N);

    for (tc = 0; tc < N; ++tc) {
        int S, i, hits = 0;
        int heights[50];
        char actions[50];

        scanf("%d", &S);

        for (i = 0; i < S; ++i)
            scanf("%d", &heights[i]);
        scanf("%s", actions);

        for (i = 0; i < S; ++i) {
            if (heights[i] <= 2 && actions[i] == 'S' ||
                heights[i] > 2 && actions[i] == 'J')
                ++hits;
        }
        printf("%d\n", hits);
    }

    return 0;
}
