// https://www.urionlinejudge.com.br/judge/en/problems/view/1192

#include <stdio.h>

int main()
{
    int N, i, d1, d2;
    char ch;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%d%c%d", &d1, &ch, &d2);

        if (d1 == d2)
            printf("%d\n", d1 * d2);
        else if (ch >= 'a' && ch <= 'z')
            printf("%d\n", d1  + d2);
        else
            printf("%d\n", d2 - d1);
    }

    return 0;
}
