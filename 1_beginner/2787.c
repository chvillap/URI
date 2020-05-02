// https://www.urionlinejudge.com.br/judge/en/problems/view/2787

#include <stdio.h>

int main()
{
    int L, C;

    scanf("%d%d", &L, &C);

    if ((L % 2) ^ (C % 2))
        puts("0");
    else
        puts("1");

    return 0;
}