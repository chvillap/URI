// https://www.urionlinejudge.com.br/judge/en/problems/view/2381

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    const char *s1 = (const char *) a;
    const char *s2 = (const char *) b;

    return strcmp(s1, s2);
}

int main()
{
    int N, K, i;
    char names[100][21];

    scanf("%d%d", &N, &K);

    for (i = 0; i < N; ++i)
        scanf("%s", names[i]);

    qsort(names, N, 21, compare);
    puts(names[K - 1]);

    return 0;
}
