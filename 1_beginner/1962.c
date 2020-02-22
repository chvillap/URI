// https://www.urionlinejudge.com.br/judge/en/problems/view/1962

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    long T, A;

    scanf("%d", &N);

    while (N) {
        scanf("%ld", &T);

        A = 2015 - T;
        if (A <= 0) {
            printf("%ld A.C.\n", labs(A - 1));
        } else
            printf("%ld D.C.\n", A);

        --N;
    }

    return 0;
}
