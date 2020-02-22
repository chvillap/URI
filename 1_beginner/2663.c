// https://www.urionlinejudge.com.br/judge/en/problems/view/2663

#include <stdio.h>
#include <stdlib.h>

int compare(const void *p1, const void *p2)
{
    return *((int *) p2) - *((int *) p1);
}

int main()
{
    int N, K, i;
    int points[1000];

    scanf("%d%d", &N, &K);

    for (i = 0; i < N; ++i)
        scanf("%d", &points[i]);

    qsort(points, N, sizeof(int), compare);

    i = K;
    while (points[i] == points[K - 1])
        ++i;

    printf("%d\n", i);

    return 0;
}