// https://www.urionlinejudge.com.br/judge/en/problems/view/2166

#include <stdio.h>

double sqrt2(int step)
{
    if (!step)
        return 2.0;

    return 2.0 + 1.0 / sqrt2(step - 1);
}

int main()
{
    int N;

    scanf("%d", &N);

    printf("%.10lf\n", sqrt2(N) - 1.0);

    return 0;
}
