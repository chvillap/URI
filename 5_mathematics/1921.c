// https://www.urionlinejudge.com.br/judge/en/problems/view/1921

#include <stdio.h>

int main()
{
    unsigned long long n;

    scanf("%llu", &n);

    printf("%llu\n", (n - 3) * n / 2);

    return 0;
}
