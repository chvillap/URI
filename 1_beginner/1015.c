// https://www.urionlinejudge.com.br/judge/en/problems/view/1015

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2;
    double dx, dy;

    scanf("%lf", &x1);
    scanf("%lf", &y1);

    scanf("%lf", &x2);
    scanf("%lf", &y2);

    dx = x2 - x1;
    dy = y2 - y1;
    printf("%.4lf\n", sqrt(dx * dx + dy * dy));

    return 0;
}
