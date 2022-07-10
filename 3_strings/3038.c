// https://www.beecrowd.com.br/judge/en/problems/view/3038

#include <stdio.h>

int main()
{
    char F[258];
    char *p;

    while (fgets(F, 258, stdin)) {
        for (p = F; *p != '\n' && *p != '\0'; ++p) {
            switch (*p) {
                case '@': *p = 'a'; break;
                case '&': *p = 'e'; break;
                case '!': *p = 'i'; break;
                case '*': *p = 'o'; break;
                case '#': *p = 'u';
            }
        }
        *p = '\0';
        puts(F);
    }

    return 0;
}
