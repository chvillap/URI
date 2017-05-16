// https://www.urionlinejudge.com.br/judge/en/problems/view/1287

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char line[52];

    while (fgets(line, 52, stdin)) {
        char number[51];
        char *pin, *pout;
        int numdigits = 0, error = 0;

        for (pin = line, pout = number; *pin != '\n' && !error; ++pin) {
            if (*pin == 'O' || *pin == 'o') {
                *pout++ = '0';
                ++numdigits;
            } else if (*pin == 'l') {
                *pout++ = '1';
                ++numdigits;
            } else if (isdigit(*pin)) {
                *pout++ = *pin;
                ++numdigits;
            } else if (*pin != ',' && *pin != ' ')
                error = 1;
        }
        *pout = '\0';

        if (!error) {
            pout = number;
            while (*pout == '0' && *(pout + 1) != '\0') {
                ++pout;
                --numdigits;
            }
            if (!numdigits || numdigits > 10 ||
                numdigits == 10 && strcmp(pout, "2147483647") > 0)
                error = 1;
        }

        if (error)
            puts("error");
        else
            puts(pout);
    }

    return 0;
}
