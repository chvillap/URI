// https://www.urionlinejudge.com.br/judge/en/problems/view/2414

#include <stdio.h>

int main()
{
    int n, max = 0;

    while (1) {
        scanf("%d", &n);
        if (!n)
            break;

        if (n > max)
            max = n;
    }

    printf("%d\n", max);

    return 0;
}
