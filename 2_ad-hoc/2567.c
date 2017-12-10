// https://www.urionlinejudge.com.br/judge/en/problems/view/2567

#include <stdio.h>
#include <stdlib.h>

int compare(const void *x, const void *y)
{
    return *(int*)x - *(int*)y;
}

int main()
{
    int N;

    while (scanf("%d", &N) != EOF) {
        int a[1000];
        int lethality = 0;
        int i, j;

        for (i = 0; i < N; ++i)
            scanf("%d", &a[i]);

        qsort(a, N, sizeof(int), compare);

        for (i = 0, j = N - 1; i < j; ++i, --j)
            lethality += a[j] - a[i];

        printf("%d\n", lethality);
    }

    return 0;
}
