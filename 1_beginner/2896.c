// https://www.urionlinejudge.com.br/judge/en/problems/view/2896

#include <stdio.h>

int main()
{
    int T, N, K;

    scanf("%d", &T);

    while (T) {
        scanf("%d%d", &N, &K);

        printf("%d\n", (N % K) + (N / K));

        --T;
    }

    return 0;
}