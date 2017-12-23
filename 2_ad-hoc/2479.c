// https://www.urionlinejudge.com.br/judge/en/problems/view/2479

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *s1, const void *s2)
{
    return strcmp((const char *) s1, (const char *) s2);
}

int main()
{
    int N;
    char behavior[2];
    char names[100][21];
    int i, wellbehaved = 0;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%s%s", behavior, names[i]);

        if (behavior[0] == '+')
            ++wellbehaved;
    }

    qsort(names, N, 21, comp);

    for (i = 0; i < N; ++i)
        printf("%s\n", names[i]);

    printf("Se comportaram: %d | Nao se comportaram: %d\n",
        wellbehaved, N - wellbehaved);

    return 0;
}
