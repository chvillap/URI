// https://www.urionlinejudge.com.br/judge/en/runs/add/1138

#include <stdio.h>
#include <string.h>

#define LIMIT 10000

int ipow(int base, int expt)
{
    if (!expt)
        return 1;
    if (!base)
        return 0;

    int half = ipow(base, expt / 2);
    return half * half * (expt % 2 ? base : 1);
}

int logfloor(int pow, int base)
{
    int expt = 0;

    while (pow >= base) {
        ++expt;
        pow /= base;
    }
    return expt;
}

void naive_count(int *counts, int min, int max)
{
    while (min <= max) {
        int aux = min;
        while (aux > 0) {
            ++counts[aux % 10];
            aux /= 10;
        }
        ++min;
    }
}

void pattern_count(int *counts, int expt)
{
    int i, freq, coef1, coef2;

    for (i = 0, freq = 0, coef1 = ipow(10, expt - 1), coef2 = 1;
         i < expt; ++i, coef1 /= 10, coef2 *= 10)
        freq += coef1 * coef2;
    for (i = 1; i < 10; ++i)
        counts[i] = freq;

    for (i = 0, freq = 0, coef1 = ipow(10, expt - 1), coef2 = 1;
         i < expt; ++i, coef1 /= 10, coef2 *= 10)
        freq += (coef1 - 1) * coef2;
    counts[0] = freq + expt;
    counts[1] += 1;
}

int main()
{
    while (1) {
        int A, B;
        int counts[10], counts_all[10];
        int counts_lb[10], counts_ub[10];
        int i, expt;

        scanf("%d%d", &A, &B);

        if (!A && !B)
            break;

        memset(counts, 0, sizeof(int) * 10);

        if (B - A + 1 > LIMIT) {
            memset(counts_all, 0, sizeof(int) * 10);
            memset(counts_lb, 0, sizeof(int) * 10);
            memset(counts_ub, 0, sizeof(int) * 10);

            expt = logfloor(B, 10);
            if (ipow(10, expt) < B)
                ++expt;

            pattern_count(counts_all, expt);
            naive_count(counts_lb, 1, A - 1);
            naive_count(counts_ub, B + 1, ipow(10, expt));

            for (i = 0; i < 10; ++i)
                counts[i] = counts_all[i] - counts_lb[i] - counts_ub[i];
        } else
            naive_count(counts, A, B);

        for (i = 0; i < 9; ++i)
            printf("%d ", counts[i]);
        printf("%d\n", counts[9]);
    }

    return 0;
}
