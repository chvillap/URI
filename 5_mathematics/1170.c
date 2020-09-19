// https://www.urionlinejudge.com.br/judge/en/problems/view/1170

#include <stdio.h>

int main()
{
    int N, days;
    double X;

    scanf("%d", &N);

    while (N) {
        scanf("%lf", &X);

        days = 0;
        while (X > 1.0) {
            X /= 2.0;
            ++days;
        }

        printf("%d dias\n", days);
        --N;
    }

    return 0;
}
