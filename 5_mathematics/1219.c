// https://www.urionlinejudge.com.br/judge/en/problems/view/1219

#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main()
{
    int a, b, c;
    double sunflowers, violets, roses;
    double p, R, r, A;

    while (scanf("%d%d%d", &a, &b, &c) != EOF) {
        p = 0.5 * (a + b + c);
        A = sqrt(p * (p - a) * (p - b) * (p - c));
        r = A / p;
        R = a * b * c / (4.0 * A);

        roses = M_PI * r * r;
        violets = A - roses;
        sunflowers = (M_PI * R * R) - A;

        printf("%.4lf %.4lf %.4lf\n", sunflowers, violets, roses);
    }

    return 0;
}
