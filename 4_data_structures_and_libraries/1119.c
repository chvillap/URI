// https://www.urionlinejudge.com.br/judge/en/problems/view/1119

#include <stdio.h>

struct cell_t {
    int value;
    int prev;
    int next;
};

int main()
{
    int N, k, m;

    while (1) {
        struct cell_t applicants[21];
        int i, j1, j2;
        int remaining;

        scanf("%d%d%d", &N, &k, &m);

        if (!(N || k || m))
            break;

        for (i = 1; i <= N; ++i) {
            applicants[i].value = i;
            applicants[i].prev = (i == 1) ? N : i - 1;
            applicants[i].next = (i == N) ? 1 : i + 1;
        }
        applicants[0].next = 1;
        applicants[N + 1].prev = N;

        remaining = N;
        j1 = 0;
        j2 = N + 1;

        while (1) {
            for (i = 0; i < k; ++i)
                j1 = applicants[j1].next;
            for (i = 0; i < m; ++i)
                j2 = applicants[j2].prev;

            printf("%3d", applicants[j1].value);
            --remaining;
            if (j1 != j2) {
                printf("%3d", applicants[j2].value);
                --remaining;
            }

            if (applicants[j1].prev == j2 || applicants[j1].next == j2) {
                if (applicants[j1].prev == j2) {
                    applicants[j1].prev = applicants[j2].prev;
                    applicants[j2].next = applicants[j1].next;
                }
                if (applicants[j1].next == j2) {
                    applicants[j1].next = applicants[j2].next;
                    applicants[j2].prev = applicants[j1].prev;
                }
            }

            applicants[applicants[j1].prev].next = applicants[j1].next;
            applicants[applicants[j1].next].prev = applicants[j1].prev;
            if (j1 != j2) {
                applicants[applicants[j2].prev].next = applicants[j2].next;
                applicants[applicants[j2].next].prev = applicants[j2].prev;
            }

            if (remaining > 0)
                putchar(',');
            else {
                putchar('\n');
                break;
            }
        }
    }

    return 0;
}
