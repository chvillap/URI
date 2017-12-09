// https://www.urionlinejudge.com.br/judge/en/problems/view/2674,

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    int i, j;
    unsigned char is_prime[100001];

    memset(is_prime, 1, 100001);
    is_prime[0] = is_prime[1] = 0;

    for (i = 2; i <= 100000; ++i) {
        if (is_prime[i]) {
            for (j = i * 2; j <= 100000; j += i)
                is_prime[j] = 0;
        }
    }

    while (scanf("%d", &N) != EOF) {
        if (is_prime[N]) {
            while (N) {
                if (!is_prime[N % 10])
                    break;
                N /= 10;
            }
            if (N)
                puts("Primo");
            else
                puts("Super");
        } else
            puts("Nada");
    }

    return 0;
}
