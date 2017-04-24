// https://www.urionlinejudge.com.br/judge/en/problems/view/2164

#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    double sqrt5 = sqrt(5.0);

    scanf("%lf", &n);

    printf("%.1lf\n", (pow((1 + sqrt5)/2, n) - pow((1 - sqrt5)/2, n)) / sqrt5);

    return 0;
}
