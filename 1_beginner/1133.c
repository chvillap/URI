// https://www.urionlinejudge.com.br/judge/en/problems/view/1133

#include <stdio.h>

int main()
{
    int x, y, i;

    scanf("%d%d", &x, &y);

    if (x > y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }

    for (i = x + 1; i < y; ++i) {
        int m = i % 5;
        if (m == 2 || m == 3)
            printf("%d\n", i);
    }

    return 0;
}
