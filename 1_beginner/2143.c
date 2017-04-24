// https://www.urionlinejudge.com.br/judge/en/problems/view/2143

#include <stdio.h>

int main()
{
    int T;

    while (1) {
        int N, i;

        scanf("%d", &T);
        if (!T)
            break;

        for (i = 0; i < T; ++i) {
            scanf("%d", &N);
            printf("%d\n", 2*N - (2 - N%2));
        }
    }

    return 0;
}
