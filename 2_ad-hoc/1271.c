// https://www.urionlinejudge.com.br/judge/en/problems/view/1271

#include <stdio.h>

#define MAX_N 50001

int genome[MAX_N];
int finalPos[MAX_N];

inline void swap(int *x, int *y)
{
    const int z = *x;
    *x = *y;
    *y = z;
}

void reversal(int i, int j)
{
    const int distance = j - i + 1;
    const int halfDistance = distance / 2;
    int d;

    for (d = 0; d < halfDistance; ++d) {
        const int offset = distance - 2*d - 1;

        finalPos[genome[i + d]] += offset;
        finalPos[genome[j - d]] -= offset;
    }

    for (d = 0; d < halfDistance; ++d)
        swap(&genome[i + d], &genome[j - d]);
}

int main()
{
    int testCase = 0;

    while (1) {
        int N, R, Q;
        int i, j, n, x;

        scanf("%d", &N);
        if (!N)
            break;

        for (n = 0; n <= N; ++n)
            finalPos[n] = genome[n] = n;

        scanf("%d", &R);

        for (n = 0; n < R; ++n) {
            scanf("%d%d", &i, &j);
            reversal(i, j);
        }

        printf("Genome %d\n", ++testCase);

        scanf("%d", &Q);

        for (n = 0; n < Q; ++n) {
            scanf("%d", &x);
            printf("%d\n", finalPos[x]);
        }
    }

    return 0;
}
