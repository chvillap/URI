// https://www.urionlinejudge.com.br/judge/en/problems/view/1041

#include <stdio.h>

int main()
{
    double x, y;

    scanf("%lf %lf", &x, &y);

    if (!x && !y)
        puts("Origem");
    else if (!x && y)
        puts("Eixo Y");
    else if (x && !y)
        puts("Eixo X");
    else if (x > 0 && y > 0)
        puts("Q1");
    else if (x < 0 && y > 0)
        puts("Q2");
    else if (x < 0 && y < 0)
        puts("Q3");
    else if (x > 0 && y < 0)
        puts("Q4");

    return 0;
}
