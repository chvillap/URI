// https://www.urionlinejudge.com.br/judge/en/problems/view/1761

#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;
    double const PI = 3.141592654;
    double h;

    while (scanf("%lf%lf%lf", &A, &B, &C) != EOF) {
        h = B * tan(A * PI / 180.0) + C;
        printf("%.2lf\n", h * 5);
    }

    return 0;
}
