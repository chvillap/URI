// https://www.urionlinejudge.com.br/judge/en/problems/view/2312

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct country_t {
    char name[50];
    int gold, silver, bronze;
};

int comp(const void *x, const void *y)
{
    const struct country_t *c1 = (const struct country_t *) x;
    const struct country_t *c2 = (const struct country_t *) y;

    if (c1->gold == c2->gold) {
        if (c1->silver == c2->silver) {
            if (c1->bronze == c2->bronze)
                return strcmp(c1->name, c2->name);
            return c2->bronze - c1->bronze;
        }
        return c2->silver - c1->silver;
    }
    return c2->gold - c1->gold;
}

int main()
{
    int N, i;
    struct country_t C[500];

    scanf("%d", &N);

    for (i = 0; i < N; ++i)
        scanf("%s%d%d%d", C[i].name, &C[i].gold, &C[i].silver, &C[i].bronze);

    qsort(C, N, sizeof(struct country_t), comp);

    for (i = 0; i < N; ++i)
        printf("%s %d %d %d\n", C[i].name, C[i].gold, C[i].silver, C[i].bronze);

    return 0;
}
