// https://www.urionlinejudge.com.br/judge/en/problems/view/1218

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000
#define char2int(x) (((int)(x)) - '0')

int main()
{
    char line[MAX_LENGTH];
    int i, tc = 0;

    while (fgets(line, MAX_LENGTH, stdin) != NULL) {
        int N, shoeN, length, mMatches = 0, fMatches = 0;

        sscanf(line, "%d", &N);

        fgets(line, MAX_LENGTH, stdin);

        length = strlen(line);
        for (i = 0; i < length; i += 5) {
            shoeN = char2int(line[i]) * 10;
            shoeN += char2int(line[i+1]);

            if (shoeN == N) {
                if (line[i+3] == 'F')
                    ++fMatches;
                else
                    ++mMatches;
            }
        }

        if (tc)
            putchar('\n');
        printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",
            ++tc, fMatches + mMatches, fMatches, mMatches);
    }

    return 0;
}
