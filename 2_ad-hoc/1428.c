// https://www.urionlinejudge.com.br/judge/en/problems/view/1428

#include <stdio.h>

int main()
{
    int t, n, m;

    scanf("%d", &t);

    while (t) {
        scanf("%d%d", &n, &m);

        printf("%d\n", (n / 3) * (m / 3));
        --t;
    }

    return 0;
}
