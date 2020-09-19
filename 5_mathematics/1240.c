// https://www.urionlinejudge.com.br/judge/en/problems/view/1240

#include <stdio.h>

int ndigits(long x)
{
    int result = 0;
    while (x) {
        x /= 10;
        ++result;
    }
    return result;
}

long ipow(int base, int exp)
{
    long result = 1;
    while (exp) {
        result *= base;
        --exp;
    }
    return result;
}

int main()
{
    int N;
    long A, B, divisor;

    scanf("%d", &N);

    while (N) {
        scanf("%ld%ld", &A, &B);

        divisor = ipow(10, ndigits(B));
        if (A % divisor == B)
            puts("encaixa");
        else
            puts("nao encaixa");

        --N;
    }

    return 0;
}
