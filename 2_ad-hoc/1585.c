// https://www.urionlinejudge.com.br/judge/en/problems/view/1585

#include <stdio.h>

int main()
{
    int N, x, y;

    scanf("%d", &N);

    while (N > 0) {
        scanf("%d%d", &x, &y);

        printf("%d cm2\n", x * y / 2);
        --N;
    }

    return 0;
}
