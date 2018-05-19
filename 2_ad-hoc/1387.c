// https://www.urionlinejudge.com.br/judge/en/problems/view/1387

#include <stdio.h>

int main()
{
    while (1) {
        int l, r;

        scanf("%d%d", &l, &r);
        if (!l && !r)
            break;

        printf("%d\n", l + r);
    }

    return 0;
}
