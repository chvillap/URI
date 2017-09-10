// https://www.urionlinejudge.com.br/judge/en/problems/view/1073

#include <stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    for (i = 2; i <= N; i += 2)
        printf("%d^2 = %d\n", i, i * i);

    return 0;
}
