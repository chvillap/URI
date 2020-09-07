// https://www.urionlinejudge.com.br/judge/en/problems/view/2424

#include <stdio.h>

int main()
{
    int X, Y;

    scanf("%d%d", &X, &Y);

    if (X < 0 || X > 432 || Y < 0 || Y > 468)
        puts("fora");
    else
        puts("dentro");

    return 0;
}
