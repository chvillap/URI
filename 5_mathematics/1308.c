// https://www.urionlinejudge.com.br/judge/en/problems/view/1308
// N ~ n*n/2 + n/2
// n = -0.5 +- sqrt(0.25 + 2*N)

#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long C, N;
    long double n;

    scanf("%llu", &C);

    while (C) {
        scanf("%llu", &N);

        n = -0.5 + sqrt(0.25 + 2*N);
        printf("%llu\n", (unsigned long long) n);

        --C;
    }

    return 0;
}
