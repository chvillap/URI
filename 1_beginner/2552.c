// https://www.urionlinejudge.com.br/judge/en/problems/view/2552

#include <stdio.h>

int main()
{
    int N, M;
    int i, j, k, v, board[101][101];
    int ii[10000], jj[10000], length;

    while (scanf("%d%d", &N, &M) != EOF) {
        length = 0;

        for (i = 1; i <= N; ++i)
            for (j = 1; j <= M; ++j) {
                scanf("%d", &v);
                if (v) {
                    board[i][j] = 9;
                    ii[length] = i;
                    jj[length] = j;
                    ++length;
                } else
                    board[i][j] = 0;
            }

        for (k = 0; k < length; ++k) {
            if (board[ii[k] - 1][jj[k]] != 9)
                ++board[ii[k] - 1][jj[k]];
            if (board[ii[k] + 1][jj[k]] != 9)
                ++board[ii[k] + 1][jj[k]];
            if (board[ii[k]][jj[k] - 1] != 9)
                ++board[ii[k]][jj[k] - 1];
            if (board[ii[k]][jj[k] + 1] != 9)
                ++board[ii[k]][jj[k] + 1];
        }

        for (i = 1; i <= N; ++i) {
            for (j = 1; j <= M; ++j) {
                printf("%d", board[i][j]);
            }
            putchar('\n');
        }
    }

    return 0;
}