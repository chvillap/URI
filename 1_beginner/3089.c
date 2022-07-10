// https://www.beecrowd.com.br/judge/en/problems/view/3089

#include <stdio.h>
#include <stdlib.h>

struct pair_t {
    int a, b;
};

int comp_fn(const void *x, const void *y) {
    struct pair_t *p1 = (struct pair_t *) x;
    struct pair_t *p2 = (struct pair_t *) y;

    return (p1->a + p1->b) - (p2->a + p2->b); 
}

int main() {
    int n, i, x[20000];
    struct pair_t pairs[10000];

    while (1) {
        scanf("%d", &n);
        if (!n)
            break;

        for (i = 0; i < 2*n; ++i)
            scanf("%d", &x[i]);

        for (i = 0; i < n; ++i) {
            pairs[i].a = x[i];
            pairs[i].b = x[2*n-1 - i];
        }

        qsort(pairs, n, sizeof(struct pair_t), comp_fn);

        printf("%d %d\n", pairs[n-1].a + pairs[n-1].b, pairs[0].a + pairs[0].b);
    }

    return 0;
}
