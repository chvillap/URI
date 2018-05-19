// https://www.urionlinejudge.com.br/judge/en/problems/view/1149

#include <stdio.h>

int main()
{
    int A, N;
    int i, sum;

    scanf("%d%d", &A, &N);
    while (N <= 0)
        scanf("%d", &N);

    for (i = 0, sum = 0; i < N; ++i)
        sum += A + i;

    printf("%d\n", sum);

    return 0;
}
