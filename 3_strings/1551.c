// https://www.urionlinejudge.com.br/judge/en/problems/view/1551

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N;

    scanf("%d", &N);
    getchar();

    for (; N > 0; --N) {
        char sentence[1002];
        int i, length, letters, contains[26];

        memset(contains, 0, sizeof(contains));

        fgets(sentence, 1002, stdin);
        length = strlen(sentence);

        for (i = 0; i < length; ++i) {
            if (isalpha(sentence[i]))
                contains[sentence[i] - 'a'] = 1;
        }

        for (i = 0, letters = 0; i < 26; ++i)
            letters += contains[i];

        if (letters == 26)
            puts("frase completa");
        else if (letters >= 13)
            puts("frase quase completa");
        else
            puts("frase mal elaborada");
    }

    return 0;
}
