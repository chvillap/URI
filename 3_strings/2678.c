// https://www.beecrowd.com.br/judge/en/problems/view/2678

#include <stdio.h>
#include <ctype.h>

int main()
{
    char phone[302];
    char output[302];
    char *p1, *p2, letter;

    while (fgets(phone, 302, stdin)) {
        for (p1 = phone, p2 = output; (*p1 != '\n' && *p1 != '\0'); ++p1) {
            if (*p1 == '#' || *p1 == '*' || isdigit(*p1)) {
                *p2 = *p1;
                ++p2;
            } else if (isalpha(*p1)) {
                letter = toupper(*p1);
                if (letter <= 'C')
                    *p2 = '2';
                else if (letter >= 'D' && letter <= 'F')
                    *p2 = '3';
                else if (letter >= 'G' && letter <= 'I')
                    *p2 = '4';
                else if (letter >= 'J' && letter <= 'L')
                    *p2 = '5';
                else if (letter >= 'M' && letter <= 'O')
                    *p2 = '6';
                else if (letter >= 'P' && letter <= 'S')
                    *p2 = '7';
                else if (letter >= 'T' && letter <= 'V')
                    *p2 = '8';
                else if (letter >= 'W')
                    *p2 = '9';
                ++p2;
            }
        }
        *p2 = '\0';
        puts(output);
    }

    return 0;
}
