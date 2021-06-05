// https://www.urionlinejudge.com.br/judge/pt/problems/view/1410

#include <stdio.h>
#include <stdlib.h>

int comp(const void *x, const void *y)
{
    return *((const int *) x) - *((const int *) y);
}

int main()
{
    int A, D, B, C[10000];
    int i, Bmin;

    while (1) {
        scanf("%d%d", &A, &D);
        if (!(A || D))
            break;

        Bmin = 10001;
        for (i = 0; i < A; ++i) {
            scanf("%d", &B);
            if (B < Bmin)
                Bmin = B;
        }

        for (i = 0; i < D; ++i)
            scanf("%d", &C[i]);

        qsort(C, D, sizeof(int), comp);

        if (Bmin < C[1])
            puts("Y");
        else
            puts("N");
    }

    return 0;
}
