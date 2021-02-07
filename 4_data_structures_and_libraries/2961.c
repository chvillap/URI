// https://www.urionlinejudge.com.br/judge/pt/problems/view/2961

#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, min, first;
    int hits[4] = {0, 0, 0, 0};
    char line[101], guesses[4][101];

    scanf("%d", &N);
    getchar();

    while (N) {
        fgets(line, 100, stdin);
        for (i = 0; i < 4; ++i)
            fgets(guesses[i], 100, stdin);
        
        fgets(line, 100, stdin);
        for (i = 0; i < 4; ++i) {
            fgets(line, 100, stdin);
            if (!strcmp(line, guesses[i]))
                ++hits[i];
        }

        --N;
    }

    min = hits[0];
    for (i = 1; i < 4; ++i) {
        if (hits[i] < min)
            min = hits[i];
    }

    first = 1;
    for (i = 0; i < 4; ++i) {
        if (hits[i] == min) {
            if (first) {
                printf("%d", i + 1);
                first = 0;
            } else
                printf(" %d", i + 1);
        }
    }
    putchar('\n');

    return 0;
}
