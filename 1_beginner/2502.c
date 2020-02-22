// https://www.urionlinejudge.com.br/judge/en/problems/view/2502

#include <stdio.h>
#include <ctype.h>

int main()
{
    int C, N, i;
    char src[23], dst[23], dict[256];
    char sentence[1002], deciphered[1002];
    char *p1, *p2;

    while (scanf("%d%d\n", &C, &N) != EOF) {
        fgets(dst, sizeof(dst), stdin);
        fgets(src, sizeof(src), stdin);

        for (i = 0; i < 256; ++i)
            dict[i] = (char) i;

        for (p1 = src, p2 = dst; *p1 != '\n'; ++p1, ++p2) {
            dict[toupper(*p1)] = toupper(*p2);
            dict[tolower(*p1)] = tolower(*p2);
            dict[toupper(*p2)] = toupper(*p1);
            dict[tolower(*p2)] = tolower(*p1);
        }

        while (N) {
            fgets(sentence, 1001, stdin);

            for (p1 = sentence, p2 = deciphered; *p1 != '\n'; ++p1, ++p2)
                *p2 = dict[*p1];
            *p2 = '\0';

            puts(deciphered);
            --N;
        }
        putchar('\n');
    }

    return 0;
}