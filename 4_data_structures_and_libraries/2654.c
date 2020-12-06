// https://www.urionlinejudge.com.br/judge/en/problems/view/2654

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct creature_t {
    char S[101];
    int P, K, M;
};

int compare(const void *p1, const void *p2)
{
    const struct creature_t *c1 = (const struct creature_t *) p1;
    const struct creature_t *c2 = (const struct creature_t *) p2;

    if (c1->P == c2->P) {
        if (c1->K == c2->K) {
            if (c1->M == c2->M)
                return strcmp(c1->S, c2->S);
            return c1->M - c2->M;
        }
        return c2->K - c1->K;
    }
    return c2->P - c1->P;
}

int main()
{
    int N, i;
    struct creature_t C[100];

    scanf("%d", &N);

    for (i = 0; i < N; ++i)
        scanf("%s%d%d%d", C[i].S, &C[i].P, &C[i].K, &C[i].M);

    qsort(C, N, sizeof(struct creature_t), compare);
    puts(C[0].S);

    return 0;
}
