// https://www.urionlinejudge.com.br/judge/en/problems/view/1157

#include <stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    puts("1");
    for (i = 2; i < N; ++i)
        if (!(N % i))
            printf("%d\n", i);
    printf("%d\n", N);

    return 0;
}
