// https://www.urionlinejudge.com.br/judge/en/problems/view/2454

#include <stdio.h>

int main()
{
    int P, R;

    scanf("%d%d", &P, &R);

    if (!P)
        puts("C");
    else if (R)
        puts("A");
    else
        puts("B");

    return 0;
}
