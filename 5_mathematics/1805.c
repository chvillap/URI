// https://www.urionlinejudge.com.br/judge/en/problems/view/1805

#include <stdio.h>

int main()
{
    unsigned long long A, B;

    scanf("%llu%llu", &A, &B);

    printf("%llu\n", (A + B) * (B - A + 1) / 2);

    return 0;
}
