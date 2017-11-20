// https://www.urionlinejudge.com.br/judge/en/problems/view/1099

#include <stdio.h>

int main()
{
    int N, X, Y, i;

    scanf("%d", &N);

    while (N > 0) {
        int sum_odds = 0;

        scanf("%d%d", &X, &Y);

        if (X > Y) { // swap
            X = X + Y;
            Y = X - Y;
            X = X - Y;
        }

        for (i = X + 1 + (X % 2); i < Y; i += 2)
            sum_odds += i;

        printf("%d\n", sum_odds);
        --N;
    }

    return 0;
}
