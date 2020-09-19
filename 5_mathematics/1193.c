// https://www.urionlinejudge.com.br/judge/en/problems/view/1193

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

unsigned int dec2bin(unsigned int dec, char *bin)
{
    int i, first = 31;
    unsigned int pow2[32];

    pow2[31] = 1;
    for (i = 30; i >= 0; --i)
        pow2[i] = 2 * pow2[i + 1];

    for (i = 0; i < 32; ++i) {
        if (dec >= pow2[i]) {
            bin[i] = '1';
            dec -= pow2[i];
            if (i < first)
                first = i;
        }
        else
            bin[i] = '0';
    }
    bin[i] = '\0';

    return first;
}

unsigned int base2dec(char *num, int base)
{
    unsigned int i, mult, dec;
    unsigned int len = strlen(num);

    for (i = 0, mult = 1, dec = 0; i < len; ++i, mult *= base)
        dec += mult * char2dec(num[len - 1 - i]);

    return dec;
}

int main()
{
    int N, c, first;
    unsigned int dec;
    char num[15], base[4], bin[33];

    scanf("%d", &N);

    for (c = 1; c <= N; ++c) {
        scanf("%s %s", num, base);

        printf("Case %d:\n", c);

        if (base[0] == 'd') {
            sscanf(num, "%u", &dec);
            first = dec2bin(dec, bin);
            printf("%x hex\n", dec);
            printf("%s bin\n\n", bin + first);
        } else if (base[0] == 'b') {
            dec = base2dec(num, 2);
            printf("%u dec\n", dec);
            printf("%x hex\n\n", dec);
        } else {
            dec = base2dec(num, 16);
            first = dec2bin(dec, bin);
            printf("%u dec\n", dec);
            printf("%s bin\n\n", bin + first);
        }
    }

    return 0;
}
