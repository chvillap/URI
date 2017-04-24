// https://www.urionlinejudge.com.br/judge/en/problems/view/1018

#include <stdio.h>

int main()
{
    long int N;

    scanf("%ld", &N);

    printf("%ld\n", N);
    printf("%ld nota(s) de R$ 100,00\n", N / 100);
    N %= 100;
    printf("%ld nota(s) de R$ 50,00\n", N / 50);
    N %= 50;
    printf("%ld nota(s) de R$ 20,00\n", N / 20);
    N %= 20;
    printf("%ld nota(s) de R$ 10,00\n", N / 10);
    N %= 10;
    printf("%ld nota(s) de R$ 5,00\n", N / 5);
    N %= 5;
    printf("%ld nota(s) de R$ 2,00\n", N / 2);
    N %= 2;
    printf("%ld nota(s) de R$ 1,00\n", N);

    return 0;
}
