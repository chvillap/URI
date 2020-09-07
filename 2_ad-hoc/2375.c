// https://www.urionlinejudge.com.br/judge/en/problems/view/2375

#include <stdio.h>

int main()
{
    int N, A, L, P;

    scanf("%d%d%d%d", &N, &A, &L, &P);

    if (N <= A && N <= L && N <= P)
        puts("S");
    else
        puts("N");

    return 0;
}
