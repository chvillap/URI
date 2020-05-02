// https://www.urionlinejudge.com.br/judge/en/problems/view/2867

#include <stdio.h>
#include <math.h>

int main()
{
    int C, N, M;

    scanf("%d", &C);

    while (C) {
        scanf("%d%d", &N, &M);
        printf("%d\n", 1 + (int)(M * log10((double) N)));

        --C;
    }

    return 0;
}