// https://www.urionlinejudge.com.br/judge/en/problems/view/1272

#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, j, length;
    char line[52], hidden[52];

    scanf("%d", &N);
    getchar();

    for (; N > 0; --N) {
        fgets(line, 52, stdin);
        length = strlen(line) - 1;

        for (i = 0, j = 0; i < length; ++i) {
            if (line[i] != ' ' && (!i || line[i-1] == ' '))
                hidden[j++] = line[i];
        }
        hidden[j] = '\0';

        puts(hidden);
    }

    return 0;
}
