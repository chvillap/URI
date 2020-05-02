// https://www.urionlinejudge.com.br/judge/en/problems/view/2812

#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return *((const int *) a) - *((const int *) b);
}

int main()
{
    int N, M, i;
    int tmp, m, list[1000];

    scanf("%d", &N);

    while (N) {
        scanf("%d", &M);

        for (i = 0, m = 0; i < M; ++i) {
            scanf("%d", &tmp);

            if (tmp % 2)
                list[m++] = tmp;
        }

        if (m > 0) {        
            qsort(list, m, sizeof(int), comp);

            printf("%d", list[m - 1]);
            if (m > 1)
                printf(" %d", list[0]);

            for (i = 1; i < m / 2; ++i)
                printf(" %d %d", list[m - 1 - i], list[i]);

            if (m > 1 && m % 2)
                printf(" %d\n", list[m / 2]);
            else
                putchar('\n');
        } else
            putchar('\n');

        --N;
    }

    return 0;
}
