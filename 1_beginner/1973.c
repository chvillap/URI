// https://www.urionlinejudge.com.br/judge/en/problems/view/1973

#include <stdio.h>
#include <string.h>

int main()
{
    int N, X[1000001];
    int i, attacked = 0;
    long long nonstolen = 0;
    char flag[1000001];

    scanf("%d", &N);
    for (i = 1; i <= N; ++i) {
        scanf("%d", &X[i]);
        nonstolen += X[i];
    }

    memset(flag, 0, sizeof(flag));

    i = 1;
    while (i > 0 && i <= N && X[i]) {
        if (!flag[i]) {
            flag[i] = 1;
            ++attacked;
        }
        if (X[i] % 2) {
            --X[i];
            ++i;
        } else {
            --X[i];
            --i;
        }
        --nonstolen;
    }

    printf("%d %lld\n", attacked, nonstolen);

    return 0;
}