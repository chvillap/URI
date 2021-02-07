// https://www.urionlinejudge.com.br/judge/en/problems/view/1471

#include <stdio.h>
#include <string.h>

int main()
{
    int N, R;
    int j, id, nmiss, returned[10001];

    while (scanf("%d%d", &N, &R) != EOF) {
        memset(returned, 0, sizeof(returned));

        for (j = 0; j < R; ++j) {
            scanf("%d", &id);
            returned[id] = 1;
        }

        nmiss = 0;
        for (j = 1; j <= N; ++j) {
            if (!returned[j]) {
                printf("%d ", j);
                ++nmiss;
            }
        }

        if (!nmiss)
            puts("*");
        else
            putchar('\n');
    }

    return 0;
}
