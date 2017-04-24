// https://www.urionlinejudge.com.br/judge/en/problems/view/1043

#include <stdio.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main()
{
    double A, B, C;
    double x1, x2, x3;

    scanf("%lf %lf %lf", &A, &B, &C);

    x1 = MIN(A, MIN(B, C));
    x3 = MAX(A, MAX(B, C));
    x2 = A + B + C - x1 - x3;

    if (x3 < x1 + x2)
        printf("Perimetro = %.1lf\n", A + B + C);
    else
        printf("Area = %.1lf\n", (A + B) * C / 2.0);

    return 0;
}
