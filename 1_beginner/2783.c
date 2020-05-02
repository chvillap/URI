// https://www.urionlinejudge.com.br/judge/en/problems/view/2783

#include <stdio.h>
#include <string.h>

int main()
{
    int N, C, M;
    int stamped[50], purchased[101];
    int i, p, missing;

    memset(purchased, 0, sizeof(purchased));

    scanf("%d%d%d", &N, &C, &M);
    for (i = 0; i < C; ++i) {
        scanf("%d", &stamped[i]);
    }
    for (i = 0; i < M; ++i) {
        scanf("%d", &p);
        purchased[p] = 1;
    }

    missing = C;
    for (i = 0; i < C; ++i) {
        if (purchased[stamped[i]])
            --missing;
    }

    printf("%d\n", missing);

    return 0;
}