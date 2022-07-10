// https://www.beecrowd.com.br/judge/en/problems/view/2062

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char text[200002];
    char *word;

    while (scanf("%d", &N) != EOF) {
        fgets(text, 200001, stdin);

        text[strlen(text) - 1] = '\0';
        word = strtok(text, " ");

        while (word != NULL) {
            if (strlen(word) == 3) {
                if ((word[0] == 'O' && word[1] == 'B') ||
                    (word[0] == 'U' && word[1] == 'R'))
                    word[2] = 'I';
            }
            printf("%s", word);

            word = strtok(NULL, " ");
            if (word == NULL)
                putchar('\n');
            else
                putchar(' ');
        }
    }

    return 0;
}
