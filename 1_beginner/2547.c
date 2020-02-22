// https://www.urionlinejudge.com.br/judge/en/problems/view/2547

#include <stdio.h>

int main()
{
    int N, Amin, Amax;
    int A, count;

    while (scanf("%d%d%d", &N, &Amin, &Amax) != EOF) {
        count = 0;

        while (N) {
            scanf("%d", &A);

            if (A >= Amin && A <= Amax)
                ++count;

            --N;
        }
        printf("%d\n", count);
    }

    return 0;
}