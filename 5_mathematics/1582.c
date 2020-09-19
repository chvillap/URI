// https://www.urionlinejudge.com.br/judge/en/problems/view/1582

#include <stdio.h>

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int x, y, z;

    while (scanf("%d%d%d", &x, &y, &z) != EOF) {
        if ((x*x == y*y + z*z) || (y*y == x*x + z*z) || (z*z == x*x + y*y)) {
            if (gcd(gcd(x, y), z) == 1)
                puts("tripla pitagorica primitiva");
            else
                puts("tripla pitagorica");
        } else
            puts("tripla");
    }

    return 0;
}
