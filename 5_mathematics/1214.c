// https://www.urionlinejudge.com.br/judge/en/problems/view/1214

#include <stdio.h>

int main()
{
    int C, N;
    int i, X[1000], sum, count;
    double average;

    scanf("%d", &C);

    while (C) {
        scanf("%d", &N);

        for (i = 0, sum = 0; i < N; ++i) {
            scanf("%d", &X[i]);
            sum += X[i];
        }
        average = sum / N;

        for (i = 0, count = 0; i < N; ++i) {
            if (X[i] > average)
                ++count;
        }

        printf("%.3lf%%\n", 100.0 * count / N);

        --C;
    }

    return 0;
}
