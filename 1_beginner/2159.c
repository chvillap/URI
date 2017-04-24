// https://www.urionlinejudge.com.br/judge/en/problems/view/2159

#include <stdio.h>
#include <math.h>

int main()
{
    long double n;
    long double p;

    scanf("%Lf", &n);

    p = n / log(n);
    printf("%.1Lf %.1Lf\n", p, 1.25506 * p);

    return 0;
}
