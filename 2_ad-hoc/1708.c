// https://www.urionlinejudge.com.br/judge/en/problems/view/1708

#include <stdio.h>
#include <math.h>

int main()
{
    int X, Y;

    scanf("%d%d", &X, &Y);
    printf("%d\n", (int) ceil((double) Y / (Y - X)));

    return 0;
}
