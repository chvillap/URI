// https://www.urionlinejudge.com.br/judge/en/problems/view/1743

#include <stdio.h>

int main()
{
    int c1[5], c2[5];

    scanf("%d%d%d%d%d", &c1[0], &c1[1], &c1[2], &c1[3], &c1[4]);
    scanf("%d%d%d%d%d", &c2[0], &c2[1], &c2[2], &c2[3], &c2[4]);

    if (c1[0] ^ c2[0] && c1[1] ^ c2[1] && c1[2] ^ c2[2] &&
        c1[3] ^ c2[3] && c1[4] ^ c2[4])
        puts("Y");
    else
        puts("N");

    return 0;
}
