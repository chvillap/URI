// https://www.urionlinejudge.com.br/judge/en/problems/view/2533

#include <stdio.h>

int main()
{
    int M, N, C;
    double numerator, denominator;

    while (scanf("%d", &M) != EOF) {
        numerator = denominator = 0.0;

        while (M) {
            scanf("%d%d", &N, &C);
            numerator += N * C;
            denominator += C;
            --M;
        }

        printf("%.4lf\n", numerator / (denominator * 100.0));
    }

    return 0;
}