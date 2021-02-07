// https://www.urionlinejudge.com.br/judge/en/problems/view/2380

#include <stdio.h>

int rank[100000];
int parent[100000];

void make_set(int x)
{
    parent[x] = x;
    rank[x] = 0;
}

void link(int x, int y)
{
    if (rank[x] > rank[y]) {
        parent[y] = x;
    } else {
        parent[x] = y;
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
    int N, K, i, b1, b2;
    char op;

    scanf("%d%d\n", &N, &K);

    for (i = 0; i < N; ++i)
        make_set(i);

    for (i = 0; i < K; ++i) {
        scanf("%c %d%d\n", &op, &b1, &b2);

        if (op == 'C') {
            if (find_set(b1) == find_set(b2))
                puts("S");
            else
                puts("N");
        } else // op == 'F'
            union_set(b1, b2);
    }

    return 0;
}
