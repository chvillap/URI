// https://www.urionlinejudge.com.br/judge/en/problems/view/1760

#include <stdio.h>
#include <math.h>

int main()
{
    int l;

    while (scanf("%d", &l) != EOF)
        printf("%.2lf\n", (l*l * sqrt(3.0) / 4.0) * (8.0 / 5.0));

    return 0;
}
