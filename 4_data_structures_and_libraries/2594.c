// https://www.urionlinejudge.com.br/judge/en/problems/view/2594

#include <stdio.h>
#include <string.h>

int main()
{
    int N, M, i, matches;
    char text[10002], word[129];
    char *p;

    scanf("%d\n", &N);

    while (N) {
        fgets(text, 10001, stdin);
        M = strlen(text);
        text[--M] = '\0';

        scanf("\n%s\n", word);
        matches = 0;

        p = strtok(text, " ");
        while (p != NULL) {
            if (!strcmp(p, word)) {
                if (matches)
                    printf(" %ld", p - text);
                else
                    printf("%ld", p - text);
                ++matches;
            }
            p = strtok(NULL, " ");
        }
        if (matches)
            putchar('\n');
        else
            puts("-1");

        --N;
    }

    return 0;
}
