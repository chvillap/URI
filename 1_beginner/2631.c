// https://www.urionlinejudge.com.br/judge/en/problems/view/2631

#include <stdio.h>

int root(int P[], int i)
{
    while (P[i] != i)
        i = P[P[i]];
    return i;
}

int find(int P[], int a, int b)
{
    return root(P, a) == root(P, b);
}

void weighted_union(int P[], int size[], int a, int b)
{
    int root_a = root(P, a);
    int root_b = root(P, b);

    if (size[root_a] < size[root_b]) {
        P[root_a] = P[root_b];
        size[root_b] += size[root_a];
    } else {
        P[root_b] = P[root_a];
        size[root_a] += size[root_b];
    }
}

int main()
{
    int N, M, Q;
    int X, Y, A, B;
    int i, P[10001], size[10001];
    int first = 1;

    while (scanf("%d%d%d", &N, &M, &Q) == 3) {
        for (i = 1; i <= N; ++i) {
            P[i] = i;
            size[i] = 1;
        }

        for (i = 0; i < M; ++i) {
            scanf("%d%d", &X, &Y);
            weighted_union(P, size, X, Y);
        }

        if (!first)
            putchar('\n');

        for (i = 0; i < Q; ++i) {
            scanf("%d%d", &A, &B);
            if (find(P, A, B))
                puts("S");
            else
                puts("N");
        }

        first = 0;
    }

    return 0;
}
