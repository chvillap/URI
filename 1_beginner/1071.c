// https://www.urionlinejudge.com.br/judge/en/problems/view/1071

#include <stdio.h>

int main()
{
    int X, Y;
    int i, sum = 0;

    scanf("%d%d", &X, &Y);

    if (X > Y) {
        X = X + Y;
        Y = X - Y;
        X = X - Y;
    }

    X += !!(X % 2) + 1;
    for (i = X; i < Y; i += 2)
        sum += i;

    printf("%d\n", sum);

    return 0;
}
