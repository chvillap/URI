// https://www.urionlinejudge.com.br/judge/en/problems/view/2163

#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;
    int T[1000][1000];
    int x = 0, y = 0;

    scanf("%d %d", &rows, &cols);

    for (i = 0; i < rows; ++i)
        for (j = 0; j < cols; ++j)
            scanf("%d", &T[i][j]);

    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            if (i > 0 && j > 0 && i < rows-1 && j < cols-1 && T[i][j] == 42) {
                for (x = i-1; x <= i+1; ++x)
                    for (y = j-1; y <= j+1; ++y)
                        if (T[x][y] != 7 && (x != i || y != j))
                            goto END_SEARCH;

END_SEARCH:
                if (x <= i+1 || y <= j+1)
                    x = y = 0;
                else {
                    x = i + 1;
                    y = j + 1;
                    goto EXIT;
                }
            }
        }
    }

EXIT:
    printf("%d %d\n", x, y);

    return 0;
}
