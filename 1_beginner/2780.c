// https://www.urionlinejudge.com.br/judge/en/problems/view/2780

#include <stdio.h>

int main()
{
    int D;

    scanf("%d", &D);

    if (D <= 800)
        puts("1");
    else if (D <= 1400)
        puts("2");
    else
        puts("3");

    return 0;
}
