// https://www.urionlinejudge.com.br/judge/pt/problems/view/2893

#include <stdio.h>

int mod(int x, int n)
{
    return (x % n + n) % n;
}

int main()
{
    int k, N, T, i, j;
    int fib[20000];
    int sum[20000];

    scanf("%d", &T);

    while (T) {
        scanf("%d%d", &k, &N);

        fib[0] = sum[0] = 0;
        for (i = 1; i < k; ++i) {
            fib[i] = i;
            sum[i] = sum[i - 1] + i;
        }

        for (i = k, j = 0; i < N; ++i, ++j) {
            fib[i] = sum[i - 1];
            sum[i] = mod(mod(sum[i - 1] + fib[i], 1000007) - fib[j], 1000007);
        }

        printf("%d\n", fib[N - 1]);

        --T;
    }

    return 0;
}
