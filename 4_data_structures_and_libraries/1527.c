// https://www.urionlinejudge.com.br/judge/en/problems/view/1527

#include <stdio.h>

#define MAXSIZE 100001

int rank[MAXSIZE];
int parent[MAXSIZE];
int points[MAXSIZE];

void make_set(int x, int pts)
{
    parent[x] = x;
    rank[x] = 0;
    points[x] = pts;
}

void link(int x, int y)
{
    if (rank[x] > rank[y]) {
        parent[y] = x;
        points[x] += points[y];
    } else {
        parent[x] = y;
        points[y] += points[x];
        if (rank[x] == rank[y])
            rank[y] += 1;
    }
}

int find_set(int x)
{
    if (x != parent[x])
        parent[x] = find_set(parent[x]);
    return parent[x];
}

void union_set(int x, int y)
{
    link(find_set(x), find_set(y));
}

int main()
{
    int N, M, P, Q, A, B;
    int i, g1, gA, gB, victories;

    while (1) {
        victories = 0;

        scanf("%d%d", &N, &M);
        if (!(N || M))
            break;

        for (i = 1; i <= N; ++i) {
            scanf("%d", &P);
            make_set(i, P);
        }

        for (i = 0; i < M; ++i) {
            scanf("%d%d%d", &Q, &A, &B);

            if (Q == 1)
                union_set(A, B);
            else { // Q == 2
                g1 = find_set(1);
                gA = find_set(A);
                gB = find_set(B);

                if ((g1 == gA && points[gA] > points[gB]) ||
                    (g1 == gB && points[gA] < points[gB]))
                    ++victories;
            }
        }

        printf("%d\n", victories);
    }

    return 0;
}
