// https://www.urionlinejudge.com.br/judge/en/problems/view/1024

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N;
    char line[1002];
    int i, j, length, half, tmp;

    fgets(line, 10, stdin);
    sscanf(line, "%d", &N);

    for (i = 0; i < N; ++i) {
        fgets(line, 1001, stdin);

        length = strlen(line) - 1;
        half = length / 2;
        line[length] = '\0';

        for (j = 0; j < length; ++j) {
            if (isalpha(line[j]))
                line[j] += 3;
        }

        for (j = 0; j < half; ++j) {
            tmp = line[j];
            line[j] = line[length - 1 - j];
            line[length - 1 - j] = tmp;
        }

        for (j = half; j < length; ++j)
            line[j] -= 1;

        puts(line);
    }

    return 0;
}
