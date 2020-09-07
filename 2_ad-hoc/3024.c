// https://www.urionlinejudge.com.br/judge/en/problems/view/3024

#include <stdio.h>

int main()
{
    int N, X, A[1000];
    int i, j, max = 1;

    scanf("%d%d", &N, &X);
    for (i = 0; i < N; ++i)
        scanf("%d", &A[i]);

    for (i = 0; i <= N - max; ++i) {
        j = i;
        while (j < N-1 && A[j+1] - A[j] <= X)
            ++j;
        if (j - i + 1 > max)
            max = j - i + 1;
    }

    printf("%d\n", max);

    return 0;
}
