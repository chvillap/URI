// https://www.urionlinejudge.com.br/judge/en/problems/view/1630

#include <stdio.h>

long mdc(long a, long b)
{
    if (!b)
        return a;
    return mdc(b, a % b);
}

int main()
{
    long X, Y, m;

    while (scanf("%ld%ld", &X, &Y) != EOF) {
        m = mdc(X, Y);
        printf("%ld\n", 2*(X/m - 1) + 2*(Y/m + 1));
    }

    return 0;
}
