// https://www.urionlinejudge.com.br/judge/en/problems/view/2791

#include <stdio.h>

int main()
{
    int i, C[4];

    scanf("%d%d%d%d", &C[0], &C[1], &C[2], &C[3]);

    for (i = 0; i < 4; ++i) {
        if (C[i] == 1) {
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}