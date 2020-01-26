// https://www.urionlinejudge.com.br/judge/en/problems/view/1848

#include <stdio.h>
#include <string.h>

int main()
{
    char line[10];
    int number = 0, N = 3;

    while (N) {
        fgets(line, 9, stdin);
        line[7] = '\0';

        if (!strcmp(line, "caw caw")) {
            printf("%d\n", number);
            number = 0;
            --N;
        } else {
            if (line[0] == '*')
                number += 4;
            if (line[1] == '*')
                number += 2;
            if (line[2] == '*')
                number += 1;
        }
    }

    return 0;
}