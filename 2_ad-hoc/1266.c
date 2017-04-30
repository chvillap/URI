// https://www.urionlinejudge.com.br/judge/en/problems/view/1266

#include <stdio.h>

int main()
{
    while (1) {
        int N, fence[5000];
        int i, prev, beg = -1, posts = 0;

        scanf("%d", &N);

        if (!N)
            break;

        for (i = 0; i < N; ++i) {
            scanf("%d", &fence[i]);

            if (beg < 0 && fence[i])
                beg = i;
        }

        if (beg < 0)
            posts = N / 2 + N % 2;
        else {
            prev = beg;
            i = (beg + 1) % N;

            while (i != beg) {
                if (!fence[i] && !fence[prev]) {
                    fence[i] = 1;
                    ++posts;
                }
                prev = i;
                i = (i + 1) % N;
            }
        }

        printf("%d\n", posts);
    }

    return 0;
}
