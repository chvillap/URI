// https://www.urionlinejudge.com.br/judge/en/problems/view/1383

#include <stdio.h>
#include <string.h>

int array_sum(int *array, int length) {
    int i, result = 0;

    for (i = 0; i < length; ++i)
        result += array[i];

    return result;
}

int main()
{
    int N, n, i, j, k;
    int input[9][9];
    int flags_row[9][10];
    int flags_col[9][10];
    int flags_sub[9][10];

    scanf("%d", &N);

    for (n = 1; n <= N; ++n) {
        int invalid = 0;

        memset(flags_row, 0, sizeof(flags_row));
        memset(flags_col, 0, sizeof(flags_col));
        memset(flags_sub, 0, sizeof(flags_sub));

        for (i = 0; i < 9; ++i) {
            for (j = 0; j < 9; ++j) {
                scanf("%d", &input[i][j]);

                if (!invalid) {
                    if (i < 3) {
                        if (j < 3)
                            k = 0;
                        else if (j < 6)
                            k = 1;
                        else
                            k = 2;
                    } else if (i < 6) {
                        if (j < 3)
                            k = 3;
                        else if (j < 6)
                            k = 4;
                        else
                            k = 5;
                    } else {
                        if (j < 3)
                            k = 6;
                        else if (j < 6)
                            k = 7;
                        else
                            k = 8;
                    }

                    flags_row[i][input[i][j]] = 1;
                    flags_col[j][input[i][j]] = 1;
                    flags_sub[k][input[i][j]] = 1;
                }
            }

            if (!invalid && array_sum(flags_row[i], 10) != 9)
                invalid = 1;
        }

        if (!invalid) {
            for (j = 0; j < 9; ++j)
                if (array_sum(flags_col[j], 10) != 9)
                    invalid = 1;
        }

        if (!invalid) {
            for (k = 0; k < 9; ++k)
                if (array_sum(flags_sub[k], 10) != 9)
                    invalid = 1;
        }

        printf("Instancia %d\n%s\n\n", n, (invalid ? "NAO" : "SIM"));
    }

    return 0;
}
