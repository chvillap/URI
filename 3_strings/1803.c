// https://www.urionlinejudge.com.br/judge/en/problems/view/1803

#include <stdio.h>
#include <string.h>

#define toint(x) ((x) - '0')

int main()
{
    char matstr[4][83];
    int i, N, F, L, M;
    char C[81];

    scanf("%s%s%s%s", matstr[0], matstr[1], matstr[2], matstr[3]);
    N = strlen(matstr[0]);

    F = toint(matstr[0][0]) * 1000 + toint(matstr[1][0]) * 100 +
        toint(matstr[2][0]) * 10 + toint(matstr[3][0]);
    L = toint(matstr[0][N - 1]) * 1000 + toint(matstr[1][N - 1]) * 100 +
        toint(matstr[2][N - 1]) * 10 + toint(matstr[3][N - 1]);

    for (i = 1; i < N - 1; ++i) {
        M = toint(matstr[0][i]) * 1000 + toint(matstr[1][i]) * 100 +
            toint(matstr[2][i]) * 10 + toint(matstr[3][i]);

        C[i - 1] = (char) ((F * M + L) % 257);
    }
    C[i - 1] = '\0';

    puts(C);

    return 0;
}
