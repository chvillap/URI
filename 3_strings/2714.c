// https://www.urionlinejudge.com.br/judge/en/problems/view/2714

#include <stdio.h>
#include <string.h>

int main()
{
    int C, i, len;
    char str[21], *ptr;

    scanf("%d", &C);

    while (C) {
        scanf("%s", str);
        len = strlen(str);

        if (str[0] == 'R' && str[1] == 'A') {
            if (len == 20) {
                i = 2;
                while (str[i] == '0')
                    ++i;
                puts(str + i);
            } else
                puts("INVALID DATA");
        } else
            puts("INVALID DATA");

        --C;
    }

    return 0;
}

