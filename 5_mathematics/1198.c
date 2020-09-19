// https://www.urionlinejudge.com.br/judge/en/problems/view/1198

#include <stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    long long n1, n2;

    while (scanf("%lld%lld", &n1, &n2) != EOF)
        printf("%lld\n", max(n1, n2) - min(n1, n2));

    return 0;
}
