// https://www.urionlinejudge.com.br/judge/en/problems/view/2950

#include <stdio.h>

int main()
{
    int N, X, Y;

    scanf("%d%d%d", &N, &X, &Y);

    printf("%.2lf\n", (double) N / (X + Y));

    return 0;
}