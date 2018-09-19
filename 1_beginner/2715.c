// https://www.urionlinejudge.com.br/judge/en/problems/view/2715

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X[1000000], i;
    long long diff, min_diff;

    while (scanf("%d", &N) != EOF) {
        for (i = 0; i < N; ++i)
            scanf("%d", &X[i]);

        for (i = 1, diff = 0; i < N; ++i)
            diff += X[i];
        diff = X[0] - diff;

        min_diff = llabs(diff);
        for (i = 1; i < N - 1; ++i) {
            diff += 2 * X[i];

            if (llabs(diff) < min_diff)
                min_diff = llabs(diff);
        }

        printf("%lld\n", min_diff);
    }

    return 0;
}
