// https://www.urionlinejudge.com.br/judge/en/problems/view/2808

#include <stdio.h>

int main()
{
    char c1, c2;
    int r1, r2;

    scanf("%c%d %c%d", &c1, &r1, &c2, &r2);

    if ((c2 == c1 - 2 && r2 == r1 - 1) ||
        (c2 == c1 - 1 && r2 == r1 - 2) ||
        (c2 == c1 + 1 && r2 == r1 - 2) ||
        (c2 == c1 + 2 && r2 == r1 - 1) ||
        (c2 == c1 - 2 && r2 == r1 + 1) ||
        (c2 == c1 - 1 && r2 == r1 + 2) ||
        (c2 == c1 + 1 && r2 == r1 + 2) ||
        (c2 == c1 + 2 && r2 == r1 + 1))
        puts("VALIDO");
    else
        puts("INVALIDO");

    return 0;
}
