// https://www.urionlinejudge.com.br/judge/en/problems/view/1768

#include <stdio.h>
#include <string.h>

int main()
{
    int N;

    while (scanf("%d", &N) != EOF) {
        int i, j;
        char line[101];

        for (i = N / 2, j = 1; i >= 0; --i, j += 2) {
            memset(line, ' ', i);
            memset(line + i, '*', j);
            line[i + j] = '\0';

            puts(line);
        }

        i = N / 2;
        memset(line, ' ', i);
        memset(line + i, '*', 1);
        line[i + 1] = '\0';
        puts(line);

        i -= 1;
        memset(line, ' ', i);
        memset(line + i, '*', 3);
        line[i + 3] = '\n';
        line[i + 4] = '\0';
        puts(line);
    }

    return 0;
}
