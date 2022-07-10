// https://www.beecrowd.com.br/judge/en/problems/view/2587

#include <stdio.h>

int main()
{
    int C, i, j;
    char words[2][16];
    char incomplete[16];

    scanf("%d", &C);

    while (C) {
        scanf("%s%s%s", words[0], words[1], incomplete);

        i = 0;
        while (incomplete[i] != '_')
            ++i;
        j = i + 1;
        while (incomplete[j] != '_')
            ++j;

        if (words[0][i] == words[1][j] || words[0][j] == words[1][i])
            puts("Y");
        else
            puts("N");

        --C;
    }

    return 0;
}
