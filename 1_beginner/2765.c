// https://www.urionlinejudge.com.br/judge/en/problems/view/2765

#include <stdio.h>
#include <string.h>

int main()
{
    char phrase[200], p1[200], *p2;

    while (fgets(phrase, 200, stdin)) {
        p2 = strtok(phrase, ",");
        strcpy(p1, p2);
        p2 = strtok(NULL, ",");

        printf("%s\n%s", p1, p2);
    }

    return 0;
}
