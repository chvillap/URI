// https://www.urionlinejudge.com.br/judge/en/problems/view/2455

#include <stdio.h>

int main()
{
    int P1, C1, P2, C2;
    int prod1, prod2;

    scanf("%d%d%d%d", &P1, &C1, &P2, &C2);

    prod1 = P1 * C1;
    prod2 = P2 * C2;
    if (prod1 < prod2)
        puts("1");
    else if (prod1 > prod2)
        puts("-1");
    else
        puts("0");

    return 0;
}
