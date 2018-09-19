// https://www.urionlinejudge.com.br/judge/en/problems/view/1178

#include <stdio.h>

int main()
{
    double x, N[100];
    int i;

    scanf("%lf", &x);

    N[0] = x;
    printf("N[0] = %.4lf\n", x);

    for (i = 1; i < 100; ++i) {
        N[i] = 0.5 * N[i - 1];
        printf("N[%d] = %.4lf\n", i, N[i]);
    }

    return 0;
}
