// https://www.urionlinejudge.com.br/judge/en/problems/view/2866

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int C, i, j, k, len;
    char msg[10001], rev[10001];

    while (scanf("%d", &C) != EOF) {
        for (i = 0; i < C; ++i) {
            scanf("%s", msg);

            len = strlen(msg);
            for (k = 0, j = len - 1; j >= 0; --j) {
                if (islower(msg[j]))
                    rev[k++] = msg[j];
            }
            rev[k] = '\0';
            puts(rev);
        }
    }

    return 0;
}
