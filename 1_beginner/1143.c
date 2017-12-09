// https://www.urionlinejudge.com.br/judge/en/problems/view/1143

#include <stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    for (i = 1; i <= N; ++i)
        printf("%d %d %d\n", i, i*i, i*i*i);

    return 0;
}
