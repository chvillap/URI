// https://www.beecrowd.com.br/judge/en/problems/view/2153

#include <stdio.h>
#include <string.h>

int main()
{
    char string[31];
    
    while (scanf("%s", string) != EOF) {
        int len = strlen(string);
        int nchars = 1;

        while (nchars <= len) {
            char *sub1 = string + len - nchars;
            char *sub2 = sub1 - nchars;

            if (!strncmp(sub2, sub1, nchars)) {
                *sub1 = '\0';
                break;
            }
            ++nchars;
        }

        puts(string);
    }

    return 0;
}
