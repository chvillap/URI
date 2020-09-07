// https://www.urionlinejudge.com.br/judge/en/problems/view/2242

#include <stdio.h>
#include <string.h>

int isvowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main()
{
    char laugh[51];
    int n, i, j, funniest;

    scanf("%s", laugh);

    n = strlen(laugh);
    i = 0;
    j = n - 1;
    funniest = 1;

    while (i < j && funniest) {
        while (i < j && !isvowel(laugh[i]))
            ++i;
        while (i < j && !isvowel(laugh[j]))
            --j;

        if (laugh[i] != laugh[j])
            funniest = 0;
        else {
            ++i;
            --j;
        }
    }

    if (funniest)
        puts("S");
    else
        puts("N");

    return 0;
}
