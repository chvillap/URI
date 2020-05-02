// https://www.urionlinejudge.com.br/judge/en/problems/view/2786

#include <stdio.h>

int main()
{
    int L, C;
    int type1, type2;

    scanf("%d%d", &L, &C);

    type1 = L * C + (L - 1) * (C - 1);
    type2 = 2 * ((L - 1) + (C - 1));

    printf("%d\n%d\n", type1, type2);

    return 0;
}