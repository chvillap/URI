// https://www.urionlinejudge.com.br/judge/en/problems/view/1866

#include <stdio.h>

int main()
{
    int C, N;

    scanf("%d", &C);

    while (C) {
        scanf("%d", &N);
        if (N % 2)
            puts("1");
        else
            puts("0");
        --C;
    }

    return 0;
}