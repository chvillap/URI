// https://www.urionlinejudge.com.br/judge/pt/problems/view/2203

#include <stdio.h>
#include <math.h>

int main()
{
    double xf, yf, xi, yi, vi, r1, r2;

    while(scanf("%lf %lf %lf %lf %lf %lf %lf",
        &xf, &yf, &xi, &yi, &vi, &r1, &r2) != EOF) {

        double dx = xf - xi;
        double dy = yf - yi;
        double distance = sqrt(dx*dx + dy*dy) + 1.5*vi;

        if (distance > r1 + r2)
            puts("N");
        else
            puts("Y");
    }

    return 0;
}
