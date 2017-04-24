// https://www.urionlinejudge.com.br/judge/en/problems/view/1045

#include <stdio.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main()
{
    double a, b, c;
    double A, B, C;

    scanf("%lf %lf %lf", &a, &b, &c);

    A = MAX(a, MAX(b, c));
    C = MIN(a, MIN(b, c));
    B = a + b + c - A - C;

    if (A >= B + C)
        puts("NAO FORMA TRIANGULO");
    else {
        if (A*A == B*B + C*C)
            puts("TRIANGULO RETANGULO");
        else if (A*A > B*B + C*C)
            puts("TRIANGULO OBTUSANGULO");
        else if (A*A < B*B + C*C)
            puts("TRIANGULO ACUTANGULO");

        if (A == B && B == C)
            puts("TRIANGULO EQUILATERO");
        else if (A == B && A != C || A == C && A != B || B == C && B != A)
            puts("TRIANGULO ISOSCELES");
    }

    return 0;
}
