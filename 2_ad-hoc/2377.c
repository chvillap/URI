// https://www.urionlinejudge.com.br/judge/en/problems/view/2377

#include <stdio.h>

int main()
{
    int L, D, K, P;
    int cost;

    scanf("%d%d%d%d", &L, &D, &K, &P);

    cost = L * K + (L / D) * P;
    printf("%d\n", cost);

    return 0;
}
