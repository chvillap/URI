// https://www.urionlinejudge.com.br/judge/en/problems/view/2551

#include <stdio.h>

int main()
{
    int N, T, D;
    int i;
    double avg_speed, max_avg_speed;

    while (scanf("%d", &N) != EOF) {
        max_avg_speed = 0.0;

        for (i = 1; i <= N; ++i) {
            scanf("%d%d", &T, &D);

            avg_speed = (double) D / T;
            if (avg_speed > max_avg_speed) {
                printf("%d\n", i);
                max_avg_speed = avg_speed;
            }
        }
    }

    return 0;
}