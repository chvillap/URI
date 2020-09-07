// https://www.urionlinejudge.com.br/judge/en/problems/view/1436

#include <stdio.h>

int main()
{
    int T, N;
    int t, i, ages[10];

    scanf("%d", &T);

    for (t = 1; t <= T; ++t) {
        scanf("%d", &N);

        for (i = 0; i < N; ++i)
            scanf("%d", &ages[i]);

        printf("Case %d: %d\n", t, ages[N / 2]);
    }

    return 0;
}
