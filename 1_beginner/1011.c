// https://www.urionlinejudge.com.br/judge/en/problems/view/1011

#include <stdio.h>

int main()
{
    double R;

    scanf("%lf", &R);

    printf("VOLUME = %.3lf\n", 4.0/3 * 3.14159 * R * R * R);

    return 0;
}
