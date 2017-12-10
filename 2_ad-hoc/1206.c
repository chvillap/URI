// https://www.urionlinejudge.com.br/judge/en/problems/view/1206

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define row(ch) (8 - (int)((ch) - '0'))
#define col(ch) ((int)((ch) - 'a'))

#define max(x, y) ((x) > (y) ? (x) : (y))
#define min(x, y) ((x) < (y) ? (x) : (y))

int board[8][8];
int check[8][8];

void mark_moves(char piece, int bi, int bj)
{
    int i, j;

    switch (piece) {
        case 'P':
            if (bi < 7) {
                if (bj > 0)
                    check[bi + 1][bj - 1] = 1;
                if (bj < 7)
                    check[bi + 1][bj + 1] = 1;
            }
            break;
        case 'T':
            for (i = bi - 1; i >= 0; --i) {
                check[i][bj] = 1;
                if (board[i][bj]) break;
            }
            for (i = bi + 1; i < 8; ++i) {
                check[i][bj] = 1;
                if (board[i][bj]) break;
            }
            for (j = bj - 1; j >= 0; --j) {
                check[bi][j] = 1;
                if (board[bi][j]) break;
            }
            for (j = bj + 1; j < 8; ++j) {
                check[bi][j] = 1;
                if (board[bi][j]) break;
            }
            break;
        case 'B':
            for (i = bi - 1, j = bj - 1; i >= 0 && j >= 0; --i, --j) {
                check[i][j] = 1;
                if (board[i][j]) break;
            }
            for (i = bi - 1, j = bj + 1; i >= 0 && j < 8; --i, ++j) {
                check[i][j] = 1;
                if (board[i][j]) break;
            }
            for (i = bi + 1, j = bj - 1; i < 8 && j >= 0; ++i, --j) {
                check[i][j] = 1;
                if (board[i][j]) break;
            }
            for (i = bi + 1, j = bj + 1; i < 8 && j < 8; ++i, ++j) {
                check[i][j] = 1;
                if (board[i][j]) break;
            }
            break;
        case 'R':
            for (i = bi - 1; i >= 0; --i) {
                check[i][bj] = 1;
                if (board[i][bj]) break;
            }
            for (i = bi + 1; i < 8; ++i) {
                check[i][bj] = 1;
                if (board[i][bj]) break;
            }
            for (j = bj - 1; j >= 0; --j) {
                check[bi][j] = 1;
                if (board[bi][j]) break;
            }
            for (j = bj + 1; j < 8; ++j) {
                check[bi][j] = 1;
                if (board[bi][j]) break;
            }
            for (i = bi - 1, j = bj - 1; i >= 0 && j >= 0; --i, --j) {
                check[i][j] = 1;
                if (board[i][j]) break;
            }
            for (i = bi - 1, j = bj + 1; i >= 0 && j < 8; --i, ++j) {
                check[i][j] = 1;
                if (board[i][j]) break;
            }
            for (i = bi + 1, j = bj - 1; i < 8 && j >= 0; ++i, --j) {
                check[i][j] = 1;
                if (board[i][j]) break;
            }
            for (i = bi + 1, j = bj + 1; i < 8 && j < 8; ++i, ++j) {
                check[i][j] = 1;
                if (board[i][j]) break;
            }
            break;
        case 'W':
            for (i = max(bi - 1, 0); i <= min(bi + 1, 7); ++i) {
                for (j = max(bj - 1, 0); j <= min(bj + 1, 7); ++j) {
                    if (i != bi || j != bj)
                        check[i][j] = 1;
                }
            }
    }
}

int main()
{
    int N;

    while (scanf("%d", &N) != EOF) {
        char black[10][4];
        char white[4];
        int n, i, j, wi, wj;

        memset(board, 0, sizeof(board));
        memset(check, 0, sizeof(check));

        for (n = 0; n < N; ++n) {
            scanf("%s", black[n]);
            board[row(black[n][2])][col(black[n][1])] = 1;
        }
        for (n = 0; n < N; ++n)
            mark_moves(black[n][0], row(black[n][2]), col(black[n][1]));

        scanf("%s", white);
        wi = row(white[2]);
        wj = col(white[1]);

        for (i = max(wi - 1, 0); i <= min(wi + 1, 7); ++i) {
            for (j = max(wj - 1, 0); j <= min(wj + 1, 7); ++j) {
                if (!check[i][j]) {
                    puts("NAO");
                    goto exit;
                }
            }
        }
        puts("SIM");

        exit:;
    }

    return 0;
}
