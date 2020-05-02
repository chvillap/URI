// https://www.urionlinejudge.com.br/judge/en/problems/view/2862

#include <stdio.h>

int main()
{
    int C, N;

    scanf("%d", &C);

    while (C) {
        scanf("%d", &N);

        if (N > 8000)
            puts("Mais de 8000!");
        else
            puts("Inseto!");

        --C;
    }

    return 0;
}