// https://www.urionlinejudge.com.br/judge/en/problems/view/2691

#include <stdio.h>

int main()
{
    int N, X, Y;
    int i;

    scanf("%d", &N);

    while (N) {
        scanf("%dx%d", &X, &Y);

        if (X == Y) {
            for (i = 5; i <= 10; ++i)
                printf("%d x %d = %d\n", X, i, X*i);
        } else {
            for (i = 5; i <= 10; ++i)
                printf("%d x %d = %d && %d x %d = %d\n", X, i, X*i, Y, i, Y*i);
        }

        --N;
    }

    return 0;
}
