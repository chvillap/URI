// https://www.urionlinejudge.com.br/judge/en/problems/view/2111

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, len;
    char N[10];
    char dig[10][9] = {
        "10-01111",
        "10-10111",
        "10-11011",
        "10-11101",
        "10-11110",
        "01-01111",
        "01-10111",
        "01-11011",
        "01-11101",
        "01-11110"
    };

    while (scanf("%s", N) != EOF) {
        len = strlen(N);
        for (i = 0; i < 8; ++i) {
            for (j = 0; j < 9 - len; ++j)
                printf("%c", dig[0][i]);
            for (j = 0; j < len; ++j)
                printf("%c", dig[N[j] - '0'][i]);
            putchar('\n');
        }
        putchar('\n');
    }

    return 0;
}
