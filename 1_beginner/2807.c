// https://www.urionlinejudge.com.br/judge/en/problems/view/2807

#include <stdio.h>

int main()
{
    int N, i, curr, prev;
    int sequence[40];

    scanf("%d", &N);

    curr = prev = 1;
    sequence[0] = prev;
    sequence[1] = curr;

    for (i = 2; i < N; ++i) {
        curr = curr + prev;
        prev = curr - prev;

        sequence[i] = curr;
    }

    printf("%d", sequence[N - 1]);
    for (i = N - 2; i >= 0; --i)
        printf(" %d", sequence[i]);
    putchar('\n');

    return 0;
}