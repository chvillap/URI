// https://www.urionlinejudge.com.br/judge/en/problems/view/2456

#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (a < b && b < c && c < d && d < e)
        puts("C");
    else if (a > b && b > c && c > d && d > e)
        puts("D");
    else
        puts("N");

    return 0;
}
