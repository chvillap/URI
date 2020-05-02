// https://www.urionlinejudge.com.br/judge/en/problems/view/2863

#include <stdio.h>

int main()
{
    int T;
    double time, min_time;

    while (scanf("%d", &T) != EOF) {
        min_time = 99.0;

        while (T) {
            scanf("%lf", &time);

            if (time < min_time)
                min_time = time;

            --T;
        }

        printf("%.2lf\n", min_time);
    }

    return 0;
}