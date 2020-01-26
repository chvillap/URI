// https://www.urionlinejudge.com.br/judge/en/problems/view/1858

#include <stdio.h>

int main()
{
    int i, N, T[100];
    int min, argmin;

    scanf("%d", &N);

    for (i = 0, min = 21; i < N; ++i) {
        scanf("%d", &T[i]);

        if (T[i] < min) {
            min = T[i];
            argmin = i + 1;
        }
    }
    printf("%d\n", argmin);

    return 0;
}