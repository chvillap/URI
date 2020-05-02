// https://www.urionlinejudge.com.br/judge/en/problems/view/2762

#include <stdio.h>
#include <string.h>

int main()
{
    char line[1000], *p1, *p2;

    while (scanf("%s", line) != EOF) {
        p1 = strtok(line, ".");
        p1 = strtok(NULL, ".");
        while (*p1 != '\0' && *p1 == '0')
            ++p1;

        p2 = strtok(line, ".");

        printf("%s.%s\n", (*p1 == '\0') ? "0" : p1, p2);
    }

    return 0;
}
