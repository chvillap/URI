// https://www.urionlinejudge.com.br/judge/en/problems/view/1379

#include <stdio.h>

int main()
{
    while (1) {
        long long A, B, C;

        scanf("%lld %lld", &A, &B);
        if (!A && !B)
            break;

        printf("%lld\n", 2 * A - B);
    }

    return 0;
}
