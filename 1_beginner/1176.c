// https://www.urionlinejudge.com.br/judge/en/problems/view/1176

#include <stdio.h>

int main()
{
    int T, N;
    int i;
    long long fibonacci[61];

    fibonacci[0] = 0ll;
    fibonacci[1] = 1ll;
    for (i = 2; i <= 60; ++i)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

    scanf("%d", &T);

    while (T > 0) {
        scanf("%d", &N);
        printf("Fib(%d) = %lld\n", N, fibonacci[N]);

        --T;
    }

    return 0;
}
