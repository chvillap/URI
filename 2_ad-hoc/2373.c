// https://www.urionlinejudge.com.br/judge/en/problems/view/2373

#include <stdio.h>

int main()
{
    int N, L, C;
    int i, shattered = 0;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%d%d", &L, &C);

        if (L > C)
            shattered += C;
    }

    printf("%d\n", shattered);

    return 0;
}
