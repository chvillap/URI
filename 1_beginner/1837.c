// https://www.urionlinejudge.com.br/judge/en/problems/view/1837

#include <stdio.h>

int main()
{
    int a, b;
    int q, r;

    scanf("%d%d", &a, &b);
    q = a / b;
    r = a % b;
    if (a < 0) {
        if (r) {
            if (b < 0)
                ++q;
            else 
                --q;
            r = a - q * b;
        }
    }
    printf("%d %d\n", q, r);

    return 0;
}