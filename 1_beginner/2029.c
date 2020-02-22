// https://www.urionlinejudge.com.br/judge/en/problems/view/2029

#include <stdio.h>

int main()
{
    double V, D;
    double height, area;

    while (scanf("%lf%lf", &V, &D) != EOF) {
        area = 3.14 * D * D * 0.25;
        height = V / area;

        printf("ALTURA = %.2lf\nAREA = %.2lf\n", height, area);
    }

    return 0;
}