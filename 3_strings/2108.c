// https://www.beecrowd.com.br/judge/en/problems/view/2108

#include <stdio.h>
#include <string.h>

int main()
{
    char string[102];
    char *word, longest[101];
    int len, max_len = 0;

    while (1) {
        fgets(string, 102, stdin);
        if (!strcmp(string, "0"))
            break;

        len = strlen(string);
        string[len - 1] = '\0';

        word = strtok(string, " ");
        while (word != NULL) {
            len = strlen(word);
            if (len >= max_len) {
                max_len = len;
                strcpy(longest, word);
            }
            word = strtok(NULL, " ");

            printf("%d", len);
            if (word != NULL)
                putchar('-');
        }
        putchar('\n');
    }

    printf("\nThe biggest word: %s\n", longest);

    return 0;
}
