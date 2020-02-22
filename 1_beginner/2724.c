// https://www.urionlinejudge.com.br/judge/en/problems/view/2724

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int N, T, U;
    int i, j, abort;
    char dangerous[50][51], formula[51];
    char *ptr;

    scanf("%d", &N);

    while (N) {
        scanf("%d", &T);

        for (i = 0; i < T; ++i)
            scanf("%s", dangerous[i]);

        scanf("%d", &U);

        for (i = 0; i < U; ++i) {
            scanf("%s", formula);

            for (j = 0, abort = 0; j < T && !abort; ++j) {
                if ((ptr = strstr(formula, dangerous[j]))) {
                    ptr += strlen(dangerous[j]);
                    if (*ptr == '\0' || isupper(*ptr))
                        abort = 1;
                }
            }

            if (abort)
                puts("Abortar");
            else
                puts("Prossiga");
        }

        --N;
        if (N)
            putchar('\n');
    }

    return 0;
}