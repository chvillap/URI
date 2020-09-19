// https://www.urionlinejudge.com.br/judge/en/problems/view/2497

#include <stdio.h>

int main()
{
    int N, X, Y, i = 0;

    while (1) {
        scanf("%d", &N);
        if (N < 0)
            break;

        ++i;
        printf("Experiment %d: %d full cycle(s)\n", i, N / 2);
    }

    return 0;
}
