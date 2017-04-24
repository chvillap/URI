// https://www.urionlinejudge.com.br/judge/en/problems/view/1014

#include <stdio.h>

int main()
{
    long int distance;
    double spentFuel;

    scanf("%ld", &distance);
    scanf("%lf", &spentFuel);

    printf("%.3lf km/l\n", distance / spentFuel);

    return 0;
}
