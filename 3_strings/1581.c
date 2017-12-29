// https://www.urionlinejudge.com.br/judge/en/problems/view/1581

#include <stdio.h>
#include <string.h>

int main()
{
    int N;

    scanf("%d", &N);

    while (N > 0) {
        char currLanguage[21], prevLanguage[21];
        int K, i, allSameLanguage = 1;

        scanf("%d%s", &K, prevLanguage);

        for (i = 1; i < K; ++i) {
            scanf("%s", currLanguage);

            if (allSameLanguage && strcmp(currLanguage, prevLanguage))
                allSameLanguage = 0;
        }

        if (allSameLanguage)
            puts(currLanguage);
        else
            puts("ingles");

        --N;
    }

    return 0;
}
