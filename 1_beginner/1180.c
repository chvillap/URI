// https://www.urionlinejudge.com.br/judge/en/problems/view/1180

#include <stdio.h>

int main()
{
    int N, X;
    int i, smallest, pos;

    scanf("%d", &N);
    scanf("%d", &smallest);
    pos = 0;

    for (i = 1; i < N; ++i) {
        scanf("%d", &X);

        if (X < smallest) {
            smallest = X;
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", smallest, pos);

    return 0;
}
