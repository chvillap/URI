// https://www.urionlinejudge.com.br/judge/en/problems/view/2369

#include <stdio.h>

int main()
{
    int N, cost = 7;

    scanf("%d", &N);

    if (N > 100) {
        cost += (N - 100) * 5;
        N -= (N - 100);
    }
    if (N > 30) {
        cost += (N - 30) * 2;
        N -= (N - 30);
    }
    if (N > 10) {
        cost += (N - 10);
        N -= (N - 10);
    }

    printf("%d\n", cost);

    return 0;
}
