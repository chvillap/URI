// https://www.urionlinejudge.com.br/judge/en/problems/view/2720

#include <stdio.h>
#include <stdlib.h>

struct present_t {
    long id;
    int volume;
};

int compare(const void *x, const void *y)
{
    struct present_t *p1 = (struct present_t *) x;
    struct present_t *p2 = (struct present_t *) y;

    if (p1->volume == p2->volume)
        return p1->id - p2->id;
    return p2->volume - p1->volume;
}

int compare_id(const void *x, const void *y)
{
    struct present_t *p1 = (struct present_t *) x;
    struct present_t *p2 = (struct present_t *) y;

    return p1->id - p2->id;
}

int main()
{
    int T, N, K;
    int H, W, L;
    int n, k;
    long I;

    scanf("%d", &T);

    while (T) {
        struct present_t presents[100000];

        scanf("%d%d", &N, &K);

        for (n = 0; n < N; ++n) {
            scanf("%ld%d%d%d", &I, &H, &W, &L);

            presents[n].id = I;
            presents[n].volume = H * W * L;
        }

        qsort(presents, N, sizeof(struct present_t), compare);
        qsort(presents, K, sizeof(struct present_t), compare_id);

        printf("%ld", presents[0].id);
        for (k = 1; k < K; ++k)
            printf(" %ld", presents[k].id);
        putchar('\n');

        --T;
    }

    return 0;
}
