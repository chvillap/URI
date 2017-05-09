// https://www.urionlinejudge.com.br/judge/en/problems/view/1332

#include <stdio.h>
#include <string.h>

int distance(const char *word1, const char *word2)
{
    const char *p1 = word1;
    const char *p2 = word2;
    int dist = 0;

    while (*p1 != '\0') {
        dist += *p1 != *p2;
        ++p1;
        ++p2;
    }
    return dist;
}

int main()
{
    int N, i, dist1, dist2;
    char word[6];

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%s", word);

        if (strlen(word) == 3) {
            dist1 = distance(word, "one");
            dist2 = distance(word, "two");
            if (dist1 < dist2)
                puts("1");
            else
                puts("2");
        } else
            puts("3");
    }

    return 0;
}
