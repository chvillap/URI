// https://www.urionlinejudge.com.br/judge/en/problems/view/1165

#include <stdio.h>
#include <string.h>

#define MAX 10000001

int not_prime[MAX];

void sieve_of_eratosthenes()
{
    int i, j, last;

    memset(not_prime, 0, MAX * sizeof(int));

    for (i = 2; i < MAX; ++i) {
        if (not_prime[i])
            continue;

        for (j = i * 2; j <= MAX; j += i)
            not_prime[j] = 1;
    }
}


int main()
{
    int N, X;

    sieve_of_eratosthenes();

    scanf("%d", &N);

    while (N > 0) {
        scanf("%d", &X);

        if (not_prime[X])
            printf("%d nao eh primo\n", X);
        else
            printf("%d eh primo\n", X);

        --N;
    }

    return 0;
}
