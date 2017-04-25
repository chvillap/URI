// https://www.urionlinejudge.com.br/judge/en/problems/view/1171

#include <stdio.h>
#include <string.h>

#define NUMS 2001

int main()
{
    int N, i;
    int x[40000], sorted[40000], freq[NUMS], cumsum[NUMS];

    scanf("%d", &N);

    memset(freq, 0, NUMS * sizeof(int));
    memset(cumsum, 0, NUMS * sizeof(int));

    for (i = 0; i < N; ++i) {
        scanf("%d", &x[i]);

        ++freq[x[i]];
        ++cumsum[x[i]];
    }

    for (i = 1; i < NUMS; ++i)
        cumsum[i] += cumsum[i-1];

    for (i = N-1; i >= 0; --i) {
        sorted[cumsum[x[i]]-1] = x[i];
        --cumsum[x[i]];
    }

    for (i = 0; i < N; ++i)
        if (!i || sorted[i] != sorted[i-1])
            printf("%d aparece %d vez(es)\n", sorted[i], freq[sorted[i]]);

    return 0;
}
