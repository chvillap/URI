// https://www.urionlinejudge.com.br/judge/en/problems/view/2137

#include <stdio.h>
#include <string.h>

void counting_sort(int *A, int n, int exp)
{
    int i, aux[n], count[10];

    memset(count, 0, sizeof(count));

    for (i = 0; i < n; ++i)
        ++count[(A[i] / exp) % 10];

    for (i = 1; i < 10; ++i)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; --i) {
        aux[count[(A[i] / exp) % 10] - 1] = A[i];
        --count[(A[i] / exp) % 10];
    }

    memcpy(A, aux, sizeof(aux));
}

void radix_sort(int *A, int n)
{
    int exp;

    for (exp = 1; 9999 / exp > 0; exp *= 10)
        counting_sort(A, n, exp);
}

int main()
{
    int N;
    int i, codes[1000];

    while (scanf("%d", &N) != EOF) {
        for (i = 0; i < N; ++i)
            scanf("%d", &codes[i]);

        radix_sort(codes, N);

        for (i = 0; i < N; ++i)
            printf("%04d\n", codes[i]);
    }

    return 0;
}
