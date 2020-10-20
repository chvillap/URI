// https://www.urionlinejudge.com.br/judge/en/problems/view/1548

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *p1, const void *p2)
{
    int x1 = *((const int *) p1);
    int x2 = *((const int *) p2);

    return x2 - x1;
}

int main()
{
    int N, M, i, count;
    int grades[1000], sorted[1000];

    scanf("%d", &N);

    while (N) {
        scanf("%d", &M);
        for (i = 0; i < M; ++i)
            scanf("%d", &grades[i]);

        memcpy(sorted, grades, sizeof(grades));
        qsort(sorted, M, sizeof(int), compare);

        for (i = 0, count = 0; i < M; ++i) {
            if (sorted[i] == grades[i])
                ++count;
        }

        printf("%d\n", count);
        --N;
    }

    return 0;
}
