// https://www.urionlinejudge.com.br/judge/en/problems/view/1075

#include <stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    for (i = 2; i <= 10000; i += N)
        printf("%d\n", i);

    return 0;
}
