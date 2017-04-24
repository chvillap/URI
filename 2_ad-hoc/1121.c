// https://www.urionlinejudge.com.br/judge/en/problems/view/1121

#include <stdio.h>

int main()
{
    while (1) {
        int rows, cols, instructions;
        char arena[100][100], sequence[50000];
        int i, j, ri, rj, dir = -1, collected = 0;

        scanf("%d %d %d", &rows, &cols, &instructions);

        if (!rows && !cols && !instructions)
            break;

        for (i = 0; i < rows; ++i) {
            scanf("%s", (char*) &arena[i]);

            if (dir < 0) {
                for (j = 0; j < cols; ++j) {
                    switch (arena[i][j]) {
                        case 'O':
                            dir = 0; ri = i; rj = j;
                            break;
                        case 'N':
                            dir = 1; ri = i; rj = j;
                            break;
                        case 'L':
                            dir = 2; ri = i; rj = j;
                            break;
                        case 'S':
                            dir = 3; ri = i; rj = j;
                    }
                }
            }
        }

        scanf("%s", sequence);

        for (i = 0; i < instructions; ++i) {
            switch (sequence[i]) {
                case 'D':
                    dir = (dir + 1) % 4;
                    break;
                case 'E':
                    dir = ((dir - 1) % 4 + 4) % 4;
                    break;
                case 'F':
                    switch (dir) {
                        case 0:  // 'O'
                            if (rj > 0 && arena[ri][rj-1] != '#')
                                --rj;
                            break;
                        case 1:  // 'N'
                            if (ri > 0 && arena[ri-1][rj] != '#')
                                --ri;
                            break;
                        case 2:  // 'L'
                            if (rj < cols-1 && arena[ri][rj+1] != '#')
                                ++rj;
                            break;
                        case 3:  // 'S'
                            if (ri < rows-1 && arena[ri+1][rj] != '#')
                                ++ri;
                    }
                    if (arena[ri][rj] == '*') {
                        arena[ri][rj] = '.';
                        ++collected;
                    }
            }
        }

        printf("%d\n", collected);
    }

    return 0;
}
