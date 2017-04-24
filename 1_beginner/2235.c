// https://www.urionlinejudge.com.br/judge/en/problems/view/2235

#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A == B || A == C || B == C || A == B + C || B == A + C || C == A + B)
        puts("S");
    else
        puts("N");

    return 0;
}
