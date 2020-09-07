// https://www.urionlinejudge.com.br/judge/en/problems/view/2339

#include <stdio.h>

int main()
{
    int C, P, F;

    scanf("%d%d%d", &C, &P, &F);

    if (P / C / F)
        puts("S");
    else
        puts("N");

    return 0;
}
