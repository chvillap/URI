// https://www.urionlinejudge.com.br/judge/en/problems/view/2150

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char vowels[256], phrase[300002], *p;
    int count, flags[256];

    while (fgets(vowels, 256, stdin) != NULL) {
        if (vowels[0] < ' ') continue;

        fgets(phrase, 300002, stdin);
        if (phrase[0] < ' ') continue;

        memset(flags, 0, sizeof(flags));
        for (p = vowels; !(*p == '\n' || *p == '\0'); ++p)
            flags[*p] = 1;

        count = 0;
        for (p = phrase; !(*p == '\n' || *p == '\0'); ++p) {
            if (isalnum(*p) && flags[*p])
                ++count;
        }

        printf("%d\n", count);
    }

    return 0;
}
