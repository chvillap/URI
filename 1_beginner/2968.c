// https://www.urionlinejudge.com.br/judge/en/problems/view/2968

#include <stdio.h>
#include <math.h>

int main()
{
    long long V, N, i;

    scanf("%lld%lld", &V, &N);

    for (i = 10; i < 90; i += 10)
        printf("%lld ", (long long) ceil(i * V * N / 100.0));
    printf("%lld\n", (long long) ceil(i * V * N / 100.0));

    return 0;
}