// https://www.urionlinejudge.com.br/judge/en/problems/view/2593

#include <stdio.h>
#include <string.h>

int main()
{
    int N, M, i, matches;
    char text[10002], text_copy[10002], word[51];
    char *p;

    fgets(text, 10001, stdin);
    N = strlen(text);
    text[--N] = '\0';

    memcpy(text_copy, text, sizeof(text));

    scanf("\n%d", &M);

    for (i = 0; i < M; ++i) {
        scanf("%s", word);
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

        if (i < M - 1)
            memcpy(text, text_copy, sizeof(text_copy));
    }

    return 0;
}
