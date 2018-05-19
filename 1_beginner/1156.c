// https://www.urionlinejudge.com.br/judge/en/problems/view/1156

#include <stdio.h>

int main()
{
    double sum = 0.0;
    int num = 1;
    int den = 1;

    while (num <= 39) {
        sum += (double) num / den;
        num += 2;
        den *= 2;
    }

    printf("%.2lf\n", sum);

    return 0;
}
