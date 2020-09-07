// https://www.urionlinejudge.com.br/judge/en/problems/view/2473

#include <stdio.h>
#include <string.h>

int main()
{
    int nums[100];
    int a, b, c, d, e, f;
    int i, hits = 0;

    memset(nums, 0, sizeof(nums));

    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    nums[a] = nums[b] = nums[c] = nums[d] = nums[e] = nums[f] = 1;

    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    hits += nums[a];
    hits += nums[b];
    hits += nums[c];
    hits += nums[d];
    hits += nums[e];
    hits += nums[f];

    switch (hits) {
        case 3:
            puts("terno"); break;
        case 4:
            puts("quadra"); break;
        case 5:
            puts("quina"); break;
        case 6:
            puts("sena"); break;
        default:
            puts("azar");
    }

    return 0;
}
