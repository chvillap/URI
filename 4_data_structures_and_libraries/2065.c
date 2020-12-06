// https://www.urionlinejudge.com.br/judge/en/problems/view/2065

#include <stdio.h>
#include <string.h>

int main()
{
    int N, M, v[10000], c[10000];
    int i, j, t, client, cashier, frees, busy[10000];

    scanf("%d%d", &N, &M);
    for (i = 0; i < N; ++i)
        scanf("%d", &v[i]);
    for (j = 0; j < M; ++j)
        scanf("%d", &c[j]);

    memset(busy, 0, sizeof(busy));

    t = -1;
    client = 0;
    do {
        ++t;
        for (cashier = 0, frees = 0; cashier < N; ++cashier) {
            if (busy[cashier])
                --busy[cashier];

            if (!busy[cashier]) {
                if (client < M) {
                    busy[cashier] = v[cashier] * c[client];
                    ++client;
                } else
                    ++frees;
            }
        }
    } while (frees < N);

    printf("%d\n", t);

    return 0;
}
