// https://www.urionlinejudge.com.br/judge/en/problems/view/1555

#include <stdio.h>

int main()
{
    int N, x, y;
    int r, b, c;

    scanf("%d", &N);

    while (N) {
        scanf("%d%d", &x, &y);

        r = 9*x*x + y*y;
        b = 2*x*x + 25*y*y;
        c = -100*x + y*y*y;

        if (r > b && r > c)
            puts("Rafael ganhou");
        else if (b > c && b > r)
            puts("Beto ganhou");
        else if (c > r && c > b)
            puts("Carlos ganhou");

        --N;
    }

    return 0;
}
