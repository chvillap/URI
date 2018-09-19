// https://www.urionlinejudge.com.br/judge/en/problems/view/2727

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char line[41], *ptr, letter;

    while (scanf("%d\n", &N) != EOF) {
        int i = 0;
        int j = 0;

        fgets(line, 40, stdin);

        ptr = strtok(line, " ");
        while (ptr != NULL) {
            ++i;
            j = strlen(ptr) - 1;
            ptr = strtok(NULL, " ");
        }

        letter = 'a' + ((i - 1) * 3 + (j - 1));
        printf("%c\n", letter);
    }

    return 0;
}
