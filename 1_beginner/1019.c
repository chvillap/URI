// https://www.urionlinejudge.com.br/judge/en/problems/view/1019

#include <stdio.h>

int main()
{
    long int N;

    scanf("%ld", &N);

    printf("%ld:%ld:%ld\n", N / 3600, N % 3600 / 60, N % 3600 % 60);

    return 0;
}
