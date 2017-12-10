// https://www.urionlinejudge.com.br/judge/en/problems/view/1794

#include <stdio.h>

int main()
{
    int N;
    int LA, LB;
    int SA, SB;

    scanf("%d%d%d%d%d", &N, &LA, &LB, &SA, &SB);

    if (N >= LA && N <= LB && N >= SA && N <= SB)
        puts("possivel");
    else
        puts("impossivel");

    return 0;
}
