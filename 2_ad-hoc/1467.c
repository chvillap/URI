// https://www.urionlinejudge.com.br/judge/en/problems/view/1467

#include <stdio.h>

int main()
{
    int A, B, C;

    while (scanf("%d%d%d", &A, &B, &C) != EOF) {
        if (A != B && B == C)
            puts("A");
        else if (B != C && C == A)
            puts("B");
        else if (C != A && A == B)
            puts("C");
        else
            puts("*");
    }

    return 0;
}
