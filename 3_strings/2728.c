// https://www.beecrowd.com.br/judge/en/problems/view/2728

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[51];
    char cobol[5] = {'c', 'o', 'b', 'o', 'l'};
    char *word;
    int len, i, fail;

    while (scanf("%s", string) != EOF) {
        i = 0;
        fail = 0;
        word = strtok(string, "-");
        
        while (!fail && word) {
            len = strlen(word);
            if (cobol[i] == tolower(word[0]) ||
                cobol[i] == tolower(word[len - 1])) {
                ++i;
                word = strtok(NULL, "-");
            } else
                fail = 1;
        }

        if (fail)
            puts("BUG");
        else
            puts("GRACE HOPPER");
    }

    return 0;
}
