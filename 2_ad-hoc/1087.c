// https://www.urionlinejudge.com.br/judge/en/problems/view/1087

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;

    while (1) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (!x1 && !y1 && !x2 && !y2)
            break;

        if (x1 == x2 && y1 == y2)
            puts("0");
        else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
            puts("1");
        else
            puts("2");
    }

    return 0;
}
