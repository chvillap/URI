// https://www.urionlinejudge.com.br/judge/en/problems/view/1235

#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, j, length, half;
    char line[102], decoded[101];

    scanf("%d", &N);
    getchar();

    for (i = 0; i < N; ++i) {
        fgets(line, 102, stdin);

        length = strlen(line) - 1;
        half = length / 2 + length % 2;

        for (j = half - 1; j >= 0; --j)
            decoded[half - j - 1] = line[j];

        for (j = length - 1; j >= half; --j)
            decoded[length - j - 1 + half] = line[j];

        decoded[length] = '\0';
        puts(decoded);
    }

    return 0;
}
