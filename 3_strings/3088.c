// https://www.beecrowd.com.br/judge/en/problems/view/3088

#include <stdio.h>

int main()
{
    char string[100002];
    char corrected[100002];
    char *p1, *p2;

    while (fgets(string, 100002, stdin)) {
        for (p1 = string, p2 = corrected; *p1 != '\n'; ++p1) {
            if ((*p1 == ' ' && *(p1 + 1) == '.') ||
                (*p1 == ' ' && *(p1 + 1) == ','))
                continue;
            else {
                *p2 = *p1;
                ++p2;
            }
        }
        *p2 = '\0';
        puts(corrected);
    }

    return 0;
}
