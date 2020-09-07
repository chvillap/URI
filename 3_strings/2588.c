// https://www.urionlinejudge.com.br/judge/en/problems/view/2588

#include <stdio.h>
#include <string.h>

int main()
{
    char letters[1001], *p;
    int i, counts[26], odds;

    while (scanf("%s", letters) != EOF) {
        memset(counts, 0, sizeof(counts));

        for (p = letters; *p != '\0'; ++p)
            ++counts[*p - 'a'];

        for (i = 0, odds = 0; i < 26; ++i) {
            if (counts[i] % 2)
                ++odds;
        }

        printf("%d\n", ((odds > 0) ? (odds - 1) : 0));
    }

    return 0;
}
