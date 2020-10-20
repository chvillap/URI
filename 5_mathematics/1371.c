// https://www.urionlinejudge.com.br/judge/en/problems/view/1371

#include <stdio.h>

int main()
{
    int N, i;

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        printf("1");
        for (i = 2; i * i <= N; ++i)
            printf(" %d", i * i);
        putchar('\n');
    }

    return 0;
}
