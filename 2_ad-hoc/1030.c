// https://www.urionlinejudge.com.br/judge/en/problems/view/1030

#include <stdio.h>
#include <string.h>

#define MAX_N 10001
#define MAX_K 1001

int T[MAX_N][MAX_K];

int survivor(int n, int k)
{
    if (T[n][k] >= 0)
        return T[n][k];

    if (n == 1)
        T[n][k] = 0;
    else
        T[n][k] = (survivor(n - 1, k) + k) % n;

    return T[n][k];
}

int main()
{
    int NC, n, k;
    int i;

    memset(T, -1, MAX_N * MAX_K * sizeof(int));

    scanf("%d", &NC);

    for (i = 0; i < NC; ++i) {
        scanf("%d %d", &n, &k);

        printf("Case %d: %d\n", i + 1, survivor(n, k) + 1);
    }

    return 0;
}
