// https://www.beecrowd.com.br/judge/en/problems/view/2880

#include <stdio.h>
#include <string.h>

int chrcmp(char *s1, char *s2, int nchars)
{
    int i = 0;
    while (i < nchars) {
        if (*s1 == *s2)
            return 1;
        ++i;
        ++s1;
        ++s2;
    }
    return 0;
}

int main()
{
    char message[10001], crib[10001];
    int i, nchars, diff, positions;

    scanf("%s%s", message, crib);

    i = 0;
    nchars = strlen(crib);
    diff = strlen(message) - nchars;
    positions = 0;

    while (i <= diff) {
        if (!chrcmp(message + i, crib, nchars)) {
            ++positions;
        }
        ++i;
    }

    printf("%d\n", positions);

    return 0;
}
