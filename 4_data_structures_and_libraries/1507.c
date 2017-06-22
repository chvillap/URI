// https://www.urionlinejudge.com.br/judge/en/problems/view/1507

#include <stdio.h>

int search(char query, char *str, int from)
{
    int i;

    for (i = from; str[i] != '\0'; ++i) {
        if (str[i] == query)
            return i;
    }
    return -1;
}

int main()
{
    int i, j, k;
    int N, queries, pos;
    char sequence[100001], sub[101];

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%s%d", sequence, &queries);

        for (j = 0; j < queries; ++j) {
            pos = 0;
            scanf("%s", sub);

            for (k = 0; sub[k] != '\0'; ++k) {
                pos = search(sub[k], sequence, pos);
                if (pos < 0)
                    break;
                ++pos;
            }

            if (pos < 0)
                puts("No");
            else
                puts("Yes");
        }
    }

    return 0;
}
