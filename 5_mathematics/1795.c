// https://www.urionlinejudge.com.br/judge/en/problems/view/1795

#include <stdio.h>
#include <string.h>

int main()
{
    int R, i, j;
    long long T[21][43], sum = 0;

    scanf("%d", &R);

    memset(T, 0, sizeof(T));
    T[0][43 / 2] = 1;
    for (i = 1; i < 21; ++i) {
        for (j = 1; j < 42; ++j)
            T[i][j] = T[i-1][j-1] + T[i-1][j] + T[i-1][j+1];
    }

    for (j = 0; j < 43; ++j)
        sum += T[R][j];

    printf("%lld\n", sum);

    return 0;
}
