// https://www.urionlinejudge.com.br/judge/en/problems/view/2775

#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int N;
    int packets[1000], times[1000];
    int i, swapped, total_time;

    while (scanf("%d", &N) != EOF) {
        total_time = 0;

        for (i = 0; i < N; ++i)
            scanf("%d", &packets[i]);
        for (i = 0; i < N; ++i)
            scanf("%d", &times[i]);

        do {
            swapped = 0;
            for (i = 0; i < N - 1; ++i) {
                if (packets[i] > packets[i + 1]) {
                    total_time += times[i] + times[i + 1];
                    swap(&packets[i], &packets[i + 1]);
                    swap(&times[i], &times[i + 1]);

                    swapped = 1;
                }
            }
        } while (swapped);

        printf("%d\n", total_time);
    }

    return 0;
}
