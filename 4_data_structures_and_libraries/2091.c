// https://www.urionlinejudge.com.br/judge/en/problems/view/2091

#include <stdio.h>

int main()
{
    long long A, lonely;
    int N, i;

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        scanf("%lld", &A);
        lonely = A;
        for (i = 1; i < N; ++i) {
            scanf("%lld", &A);
            lonely ^= A;
        }

        printf("%lld\n", lonely);
    }

    return 0;
}
