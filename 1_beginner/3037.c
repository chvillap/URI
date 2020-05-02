// https://www.urionlinejudge.com.br/judge/en/problems/view/3037

#include <stdio.h>

int main()
{
    int N, X, D;
    int i, joao, maria;

    scanf("%d", &N);

    while (N) {
        joao = maria = 0;

        for (i = 0; i < 3; ++i) {
            scanf("%d%d", &X, &D);
            joao += X * D;
        }
        for (i = 0; i < 3; ++i) {
            scanf("%d%d", &X, &D);
            maria += X * D;
        }

        if (joao > maria)
            puts("JOAO");
        else
            puts("MARIA");

        --N;
    }

    return 0;
}
