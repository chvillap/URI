// https://www.urionlinejudge.com.br/judge/en/problems/view/2936

#include <stdio.h>

int main()
{
    int P[5];
    long long total = 0;

    scanf("%d%d%d%d%d", &P[0], &P[1], &P[2], &P[3], &P[4]);

    total += 225 + 300*P[0] + 1500*P[1] + 600*P[2] + 1000*P[3] + 150*P[4];

    printf("%lld\n", total);

    return 0;
}