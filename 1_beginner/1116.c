// https://www.urionlinejudge.com.br/judge/en/problems/view/1116

#include <stdio.h>

int main()
{
    int N, X, Y;

    scanf("%d", &N);

    while (N > 0) {
        scanf("%d%d", &X, &Y);

        if (!Y)
            puts("divisao impossivel");
        else
            printf("%.1f\n", (float) X / Y);

        --N;
    }

    return 0;
}
