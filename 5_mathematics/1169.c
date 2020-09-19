// https://www.urionlinejudge.com.br/judge/en/problems/view/1169

#include <stdio.h>
#include <math.h>

#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    int N, X, i;
    unsigned long long grains;

    scanf("%d", &N);

    while (N) {
        scanf("%d", &X);

        for (i = 0, grains = 1; i < min(X, 63); ++i, grains *= 2);
        if (X < 64)
            grains /= 12000;
        else
            grains /= 6000;

        printf("%llu kg\n", grains);

        --N;
    }

    return 0;
}
