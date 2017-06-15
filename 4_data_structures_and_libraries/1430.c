// https://www.urionlinejudge.com.br/judge/en/problems/view/1430

#include <stdio.h>

int main()
{
    while (1) {
        char line[201], *ptr;
        int duration = 0, count = 0;

        scanf("%s", line);

        if (line[0] == '*')
            break;

        for (ptr = line + 1; *ptr != '\0'; ++ptr) {
            if (*ptr == '/') {
                if (duration == 64)
                    ++count;
                duration = 0;
            } else {
                switch (*ptr) {
                    case 'W':
                        duration += 64;
                        break;
                    case 'H':
                        duration += 32;
                        break;
                    case 'Q':
                        duration += 16;
                        break;
                    case 'E':
                        duration += 8;
                        break;
                    case 'S':
                        duration += 4;
                        break;
                    case 'T':
                        duration += 2;
                        break;
                    case 'X':
                        duration += 1;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
