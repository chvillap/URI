// https://www.urionlinejudge.com.br/judge/en/problems/view/1793

#include <stdio.h>

int main()
{
    int N, t0, t1;
    int i, total;

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        scanf("%d", &t0);
        total = 10;

        for (i = 1; i < N; ++i) {
            scanf("%d", &t1);

            if (t1 - t0 > 10)
                total += 10;
            else
                total += (t1 - t0);

            t0 = t1;
        }

        printf("%d\n", total);
    }

    return 0;
}
