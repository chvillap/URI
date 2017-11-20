// https://www.urionlinejudge.com.br/judge/en/problems/view/1094

#include <stdio.h>

#define INDEX(x) (((x) == 'C') ? 0 : ((x) == 'R' ? 1 : 2))

int main()
{
    int N, amount;
    int counts[3], total = 0;
    char animal;

    scanf("%d", &N);
    counts[0] = counts[1] = counts[2] = 0;

    while (N > 0) {
        scanf("%d %c", &amount, &animal);

        counts[INDEX(animal)] += amount;
        total += amount;

        --N;
    }

    printf("Total: %d cobaias\n"
           "Total de coelhos: %d\n"
           "Total de ratos: %d\n"
           "Total de sapos: %d\n"
           "Percentual de coelhos: %.2f %%\n"
           "Percentual de ratos: %.2f %%\n"
           "Percentual de sapos: %.2f %%\n",
           total, counts[0], counts[1], counts[2],
           100.0 * counts[0] / total,
           100.0 * counts[1] / total,
           100.0 * counts[2] / total);

    return 0;
}
