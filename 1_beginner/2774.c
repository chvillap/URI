// https://www.urionlinejudge.com.br/judge/en/problems/view/2774

#include <stdio.h>
#include <math.h>

int main()
{
    int H, M, QT, i;
    double X[100000];
    double sum, mean, var;

    while (scanf("%d%d", &H, &M) != EOF) {
        QT = H * 60 / M;
        
        for (i = 0, sum = 0.0; i < QT; ++i) {
            scanf("%lf", &X[i]);
            sum += X[i];
        }
        mean = sum / QT;

        for (i = 0, sum = 0.0; i < QT; ++i)
            sum += (X[i] - mean) * (X[i] - mean);
        var = sqrt(sum / (QT - 1));

        printf("%.5lf\n", var);
    }

    return 0;
}
