// https://www.urionlinejudge.com.br/judge/en/problems/view/2484

#include <stdio.h>
#include <string.h>

int main()
{
    char word[101], word_tri[202], blank_tri[101];
    int i, j, len;

    while (scanf("%s", word) != EOF) {
        len = strlen(word);

        for (i = 0, j = 0; i < len; ++i) {
            word_tri[j++] = word[i];
            word_tri[j++] = ' ';
        }
        word_tri[--j] = '\0';
        blank_tri[0] = '\0';

        while (j > 0) {
            printf("%s%s\n", blank_tri, word_tri);
            strcat(blank_tri, " ");
            j -= 2;
            word_tri[j] = '\0';
        }
        putchar('\n');
    }

    return 0;
}
