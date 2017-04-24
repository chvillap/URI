// https://www.urionlinejudge.com.br/judge/en/problems/view/1044

#include <stdio.h>
#include <stdlib.h>

#define MIN_ABS(x, y) ((abs(x) < abs(y)) ? (x) : (y))
#define MAX_ABS(x, y) ((abs(x) > abs(y)) ? (x) : (y))

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (!(MAX_ABS(a, b) % MIN_ABS(a, b)))
        puts("Sao Multiplos");
    else
        puts("Nao sao Multiplos");

    return 0;
}
