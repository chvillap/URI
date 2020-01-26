// https://www.urionlinejudge.com.br/judge/en/problems/view/1847

#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d%d%d", &A, &B, &C);

    if (A > B) {
        if (B <= C)
            puts(":)");
        else {
            if (B - C < A - B)
                puts(":)");
            else
                puts(":(");
        }
    } else if (A < B) {
        if (B >= C)
            puts(":(");
        else {
            if (C - B < B - A)
                puts(":(");
            else
                puts(":)");
        }
    } else {
        if (B < C)
            puts(":)");
        else
            puts(":(");
    }

    return 0;
}