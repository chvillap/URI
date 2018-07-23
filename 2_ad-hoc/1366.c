// https://www.urionlinejudge.com.br/judge/en/problems/view/1366

#include <stdio.h>

int main()
{
    while (1) {
        int N, n = 0;
        int V[1000];
        int _, i, rectangles = 0;;

        scanf("%d", &N);
        if (!N)
            break;

        while (N > 0) {
            scanf("%d%d", &_, &V[n++]);
            --N;
        }

        for (i = 0; i < n; ++i)
            rectangles += V[i] / 2;
        rectangles /= 2;

        printf("%d\n", rectangles);
    }

    return 0;
}
