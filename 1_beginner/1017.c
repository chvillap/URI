// https://www.urionlinejudge.com.br/judge/en/problems/view/1017

#include <stdio.h>

int main()
{
    long int hours, averageSpeed;

    scanf("%ld", &hours);
    scanf("%ld", &averageSpeed);

    printf("%.3lf\n", hours * averageSpeed / 12.0);

    return 0;
}
