// https://www.urionlinejudge.com.br/judge/en/problems/view/1257

#include <stdio.h>
#include <string.h>

int main()
{
    int N, L;
    int e, p, len, hash;
    char str[51];

    scanf("%d", &N);

    for (; N > 0; --N) {
        scanf("%d", &L);

        hash = 0;
        for (e = 0; e < L; ++e) {
            scanf("%s", str);
            len = strlen(str);

            for (p = 0; p < len; ++p)
                hash += (str[p] - 'A') + e + p;
        }

        printf("%d\n", hash);
    }

    return 0;
}
