// https://www.urionlinejudge.com.br/judge/en/problems/view/1107

#include <stdio.h>

int main()
{
    while (1) {
        int height, length;
        int i, xprev, x, ntimes = 0;

        scanf("%d %d", &height, &length);
        if (!height && !length)
            break;

        for (i = 0; i < length; ++i) {
            scanf("%d", &x);

            if (!i)
                ntimes += height - x;
            else if (x < xprev)
                ntimes += xprev - x;

            xprev = x;
        }
        printf("%d\n", ntimes);
    }

    return 0;
}
