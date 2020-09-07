// https://www.urionlinejudge.com.br/judge/en/problems/view/2557

#include <stdio.h>
#include <string.h>

int str2int(char *str)
{
    int i;
    int len = strlen(str);
    int exp = 1;
    int result = 0;

    for (i = len - 1; i >= 0; --i, exp *= 10)
        result += exp * (str[i] - '0');

    return result;
}

int main()
{
    char str[25], *p, unknown;
    int known[2], i;

    while (scanf("%s", str) != EOF) {
        i = 0;
        p = strtok(str, "+=");

        while (p) {
            switch (p[0]) {
                case 'R':
                    unknown = 'R'; break;
                case 'L':
                    unknown = 'L'; break;
                case 'J':
                    unknown = 'J'; break;
                default:
                    known[i++] = str2int(p);
            }
            p = strtok(NULL, "+=");
        }

        if (unknown != 'J')
            printf("%d\n", known[1] - known[0]);
        else
            printf("%d\n", known[0] + known[1]);

    }

    return 0;
}
