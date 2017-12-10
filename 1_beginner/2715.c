// https://www.urionlinejudge.com.br/judge/en/problems/view/2715

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long N;

    while (scanf("%ld", &N) != EOF) {
        long values[1000000];
        long i, diff, old_diff, diff_delta;
        long r, r_sum = 0, total_sum = 0;

        for (i = 0; i < N; ++i) {
            scanf("%ld", &values[i]);
            total_sum += values[i];
        }
        r = N;
        r_sum = total_sum;
        diff = r_sum;

        do {
            old_diff = diff;
            --r;
            r_sum -= values[r];
            diff = abs(r_sum - (total_sum - r_sum));
            diff_delta = diff - old_diff;
        } while (diff > 0 && diff_delta < 0);

        if (diff_delta > 0)
            diff = old_diff;

        printf("%ld\n", diff);
    }

    return 0;
}
