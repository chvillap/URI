// https://www.urionlinejudge.com.br/judge/en/problems/view/2982

#include <stdio.h>

int main()
{
    int N, C;
    char T;
    long long sum = 0L;

    scanf("%d\n", &N);

    while (N) {
        scanf("%c %d\n", &T, &C);

        if (T == 'V')
            sum += C;
        else // if (T == 'G')
            sum -= C;

        --N;
    }

    if (sum >= 0)
        puts("A greve vai parar.");
    else
        puts("NAO VAI TER CORTE, VAI TER LUTA!");

    return 0;
}