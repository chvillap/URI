// https://www.urionlinejudge.com.br/judge/en/problems/view/2826

#include <stdio.h>

int main()
{
    char w1[21], w2[21];
    char *p1, *p2;
    int order = 0;

    scanf("%s%s", w1, w2);

    for (p1 = w1, p2 = w2; !order && *p1 != '\0' && *p2 != '\0'; ++p1, ++p2) {
        if (*p1 < *p2)
            order = 1;
        else if (*p1 > *p2)
            order = -1;
    }

    if (!order) {
        if (*p1 == '\0')
            order = 1;
        else if (*p2 == '\0')
            order = -1;
    }

    if (order > 0)
        printf("%s\n%s\n", w1, w2);
    else
        printf("%s\n%s\n", w2, w1);

    return 0;
}