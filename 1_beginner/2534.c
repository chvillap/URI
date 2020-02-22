// https://www.urionlinejudge.com.br/judge/en/problems/view/2534

#include <stdio.h>
#include <stdlib.h>

int compare(const void *p1, const void *p2)
{
    return *(int*)p2 - *(int*)p1;
}

int main()
{
    int N, Q, n[100], p, i;

    while (scanf("%d%d", &N, &Q) != EOF) {
        for (i = 0; i < N; ++i)
            scanf("%d", &n[i]);
        
        qsort(n, N, sizeof(int), compare);

        for (i = 0; i < Q; ++i) {
            scanf("%d", &p);
            printf("%d\n", n[p - 1]);
        }
    }

    return 0;
}