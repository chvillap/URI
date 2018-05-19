// https://www.urionlinejudge.com.br/judge/en/problems/view/1153

#include <stdio.h>

int main()
{
    int N, i, fat;

    scanf("%d", &N);

    for (i = 2, fat = 1; i <= N; ++i)
        fat *= i;

    printf("%d\n", fat);

    return 0;
}
