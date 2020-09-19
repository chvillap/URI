// https://www.urionlinejudge.com.br/judge/en/problems/view/1199

#include <stdio.h>
#include <string.h>

int char2dec(char c)
{
    switch (c) {
        case 'a':
        case 'A':
            return 10;
        case 'b':
        case 'B':
            return 11;
        case 'c':
        case 'C':
            return 12;
        case 'd':
        case 'D':
            return 13;
        case 'e':
        case 'E':
            return 14;
        case 'f':
        case 'F':
            return 15;
        default:
            return c - '0';
    }
}

int main()
{
    char input[20];
    unsigned int dec, hex, mult;
    int i, L;

    while (1) {
        scanf("%s", input);
        if (input[0] == '-')
            break;

        if (input[1] == 'x') {
            sscanf(&input[2], "%u", &hex);
            L = strlen(input);
            for (i = 0, dec = 0, mult = 1; i < L-2; ++i, mult *= 16)
                dec += mult * char2dec(input[L - i - 1]);
            printf("%u\n", dec);
        } else {
            sscanf(input, "%u", &dec);
            printf("0x%X\n", dec);
        }
    }

    return 0;
}
