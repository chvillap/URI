// https://www.urionlinejudge.com.br/judge/en/problems/view/2802

#include <stdio.h>

int main()
{
    unsigned long long N, R;

    scanf("%llu", &N);

    R = 1 + (N * (N-1) / 2) + ((N * (N-1) * (N-2) * (N-3)) / 24);
    printf("%llu\n", R);

    return 0;
}
