// https://www.beecrowd.com.br/judge/en/problems/view/3159

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int getkey(char x)
{
    switch (toupper(x)) {
        case 'A':
        case 'B':
        case 'C':
            return 2;
        case 'D':
        case 'E':
        case 'F':
            return 3;
        case 'G':
        case 'H':
        case 'I':
            return 4;
        case 'J':
        case 'K':
        case 'L':
            return 5;
        case 'M':
        case 'N':
        case 'O':
            return 6;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            return 7;
        case 'T':
        case 'U':
        case 'V':
            return 8;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            return 9;
        default:
            return 0;
    }
}

void getpress(char x, char *out)
{
    out[0] = '\0';
    switch (toupper(x)) {
        case 'A': strcat(out, "2"); break;
        case 'B': strcat(out, "22"); break;
        case 'C': strcat(out, "222"); break;
        case 'D': strcat(out, "3"); break;
        case 'E': strcat(out, "33"); break;
        case 'F': strcat(out, "333"); break;
        case 'G': strcat(out, "4"); break;
        case 'H': strcat(out, "44"); break;
        case 'I': strcat(out, "444"); break;
        case 'J': strcat(out, "5"); break;
        case 'K': strcat(out, "55"); break;
        case 'L': strcat(out, "555"); break;
        case 'M': strcat(out, "6"); break;
        case 'N': strcat(out, "66"); break;
        case 'O': strcat(out, "666"); break;
        case 'P': strcat(out, "7"); break;
        case 'Q': strcat(out, "77"); break;
        case 'R': strcat(out, "777"); break;
        case 'S': strcat(out, "7777"); break;
        case 'T': strcat(out, "8"); break;
        case 'U': strcat(out, "88"); break;
        case 'V': strcat(out, "888"); break;
        case 'W': strcat(out, "9"); break;
        case 'X': strcat(out, "99"); break;
        case 'Y': strcat(out, "999"); break;
        case 'Z': strcat(out, "9999"); break;
        default: strcat(out, "0");
    }
}

int main()
{
    int N, i, length;
    char S[142], pressed[841], tmp[5];

    scanf("%d\n", &N);

    while (N) {
        fgets(S, 142, stdin);

        length = strlen(S);
        if (S[length - 1] == '\n')
            --length;

        pressed[0] = '\0';
        for (i = 0; i < length; ++i) {
            if (isupper(S[i]))
                strcat(pressed, "#");
            else if (i > 0 && getkey(S[i]) == getkey(S[i - 1]))
                strcat(pressed, "*");
            getpress(S[i], tmp);
            strcat(pressed, tmp);
        }

        puts(pressed);
        --N;
    }

    return 0;
}
