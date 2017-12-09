// https://www.urionlinejudge.com.br/judge/en/problems/view/1132

#include <stdio.h>

int main()
{
    long x, y, i, sum = 0l;

    scanf("%ld%ld", &x, &y);

    if (x > y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }

    for (i = x; i <= y; ++i)
        if (i % 13)
            sum += i;

    printf("%ld\n", sum);

    return 0;
}
