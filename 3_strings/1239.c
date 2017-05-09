// https://www.urionlinejudge.com.br/judge/en/problems/view/1239

#include <stdio.h>
#include <string.h>

int main()
{
    char text[52], html[200], tag[5];
    int i, j, len, bOpen, iOpen;

    while (fgets(text, 52, stdin)) {
        len = strlen(text) - 1;
        bOpen = iOpen = 0;

        memset(html, '\0', sizeof(html));

        for (i = 0, j = 0; i < len; ++i) {
            if (text[i] == '*' || text[i] == '_') {
                if (text[i] == '*') {
                    strcpy(tag, bOpen ? "</b>" : "<b>");
                    bOpen = !bOpen;
                } else {
                    strcpy(tag, iOpen ? "</i>" : "<i>");
                    iOpen = !iOpen;
                }
                strcat(html, tag);
                j += strlen(tag);
            } else {
                html[j] = text[i];
                ++j;
            }
        }

        puts(html);
    }

    return 0;
}
