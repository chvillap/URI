// https://www.urionlinejudge.com.br/judge/en/problems/view/2540

#include <stdio.h>

int main()
{
    int N, v, sum;
    double twothirds;

    while (scanf("%d", &N) != EOF) {
        sum = 0;
        twothirds = N * 2.0 / 3.0;

        while (N) {
            scanf("%d", &v);
            sum += v;
            --N;
        }

        if (sum >= twothirds)
            puts("impeachment");
        else
            puts("acusacao arquivada");
    }

    return 0;
}