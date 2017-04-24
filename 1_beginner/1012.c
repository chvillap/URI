// https://www.urionlinejudge.com.br/judge/en/problems/view/1012

#include <stdio.h>

int main()
{
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("TRIANGULO: %.3lf\n", a * c / 2.0);
    printf("CIRCULO: %.3lf\n", 3.14159 * c * c);
    printf("TRAPEZIO: %.3lf\n", (a + b) * c / 2.0);
    printf("QUADRADO: %.3lf\n", b * b);
    printf("RETANGULO: %.3lf\n", a * b);

    return 0;
}
