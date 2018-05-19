// https://www.urionlinejudge.com.br/judge/en/problems/view/1151

#include <stdio.h>

int main()
{
    int N;
    int i, a, b;

    scanf("%d", &N);

    putchar('0');
    a = 0;
    b = 1;
    for (i = 2; i <= N; ++i) {
        printf(" %d", b);
        b = b + a;
        a = b - a;
    }
    putchar('\n');

    return 0;
}
