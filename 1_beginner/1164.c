// https://www.urionlinejudge.com.br/judge/en/problems/view/1165

#include <stdio.h>

int main()
{
    int N, X;

    scanf("%d", &N);

    while (N > 0) {
        int i, sum = 0;

        scanf("%d", &X);

        for (i = 1; i < X; ++i) {
            if (!(X % i))
                sum += i;
        }

        if (sum == X)
            printf("%d eh perfeito\n", X);
        else
            printf("%d nao eh perfeito\n", X);

        --N;
    }

    return 0;
}
