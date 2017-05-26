// https://www.urionlinejudge.com.br/judge/pt/problems/view/1252

#include <stdio.h>
#include <stdlib.h>

struct num_t {
    int value;
    int mod;
    int odd;
};

int compare(const void *p1, const void *p2)
{
    const struct num_t *n1 = (const struct num_t *) p1;
    const struct num_t *n2 = (const struct num_t *) p2;

    if (n1->mod == n2->mod) {
        if (n1->odd && n2->odd)
            return n2->value - n1->value;

        if (!n1->odd && !n2->odd)
            return n1->value - n2->value;

        if (n1->odd)
            return -1;
        return 1;
    }
    return n1->mod - n2->mod;
}

int main()
{
    while (1) {
        int N, M, i;
        struct num_t nums[10000];

        scanf("%d%d", &N, &M);
        if (!N && !M)
            break;

        for (i = 0; i < N; ++i) {
            scanf("%d", &nums[i].value);
            nums[i].mod = nums[i].value % M;
            nums[i].odd = nums[i].value % 2;
        }

        qsort(nums, N, sizeof(struct num_t), compare);

        printf("%d %d\n", N, M);
        for (i = 0; i < N; ++i)
            printf("%d\n", nums[i].value);
    }
    puts("0 0");

    return 0;
}
