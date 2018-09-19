// https://www.urionlinejudge.com.br/judge/en/problems/view/1375

#include <stdio.h>
#include <string.h>

int main()
{
    while (1) {
        int N, C, P;
        int starting_grid[1000];
        int i, impossible = 0;

        scanf("%d", &N);
        if (!N)
            break;

        memset(starting_grid, 0, sizeof(starting_grid));

        for (i = 0; i < N; ++i) {
            scanf("%d%d", &C, &P);

            if (i + P >= 0 && i + P < N)
                starting_grid[i + P] = C;
            else
                impossible = 1;
        }

        for (i = 0; i < N && !impossible; ++i)
            if (!starting_grid[i])
                impossible = 1;

        if (impossible)
            puts("-1");
        else {
            for (i = 0; i < N - 1; ++i)
                printf("%d ", starting_grid[i]);
            printf("%d\n", starting_grid[N - 1]);
        }
    }

    return 0;
}
