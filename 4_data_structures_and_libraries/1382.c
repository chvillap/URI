// https://www.urionlinejudge.com.br/judge/en/problems/view/1382

#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int countSwaps(int seq[], int N)
{
    int i, j, swaps = 0;

    for (i = 1; i < N; ++i) {
        while (seq[i] != i) {
            swap(&seq[i], &seq[seq[i]]);
            ++swaps;
        }
    }
    return swaps;
}

int main()
{
    int T;

    scanf("%d", &T);

    for (; T > 0; --T) {
        int N;
        int seq[10001];
        int i, swaps;

        scanf("%d", &N);

        for (i = 1; i <= N; ++i)
            scanf("%d", &seq[i]);

        printf("%d\n", countSwaps(seq, N));
    }

    return 0;
}
