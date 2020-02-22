// https://www.urionlinejudge.com.br/judge/en/problems/view/1963

#include <stdio.h>

int main()
{
    double A, B;

    scanf("%lf%lf", &A, &B);
    printf("%.2lf%%\n", (B / A - 1.0) * 100.0);

    return 0;
}