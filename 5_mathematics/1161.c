// https://www.urionlinejudge.com.br/judge/en/problems/view/1161

#include <stdio.h>

int main()
{
    int M, N, i;
    unsigned long long F[21];

    F[0] = F[1] = 1;
    for (i = 2; i < 21; ++i)
        F[i] = i * F[i - 1];

    while (scanf("%d%d", &M, &N) != EOF)
        printf("%llu\n", F[M] + F[N]);

    return 0;
}
