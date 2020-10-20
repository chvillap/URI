// https://www.urionlinejudge.com.br/judge/en/problems/view/1944

#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, k, gift, count;
    char panel[401], letters, reverse;

    scanf("%d\n", &N);

    strcpy(panel, "FACE");
    k = 4;
    count = 0;

    while (N) {
        scanf("%c %c %c %c\n", &panel[k], &panel[k+1], &panel[k+2], &panel[k+3]);
        panel[k+4] = '\0';

        for (gift = 1, i = 0; gift && i < 4; ++i) {
            if (panel[k + i] != panel[k - i - 1])
                gift = 0;
        }

        if (gift) {
            ++count;
            if (k == 4)
                strcpy(panel, "FACE");
            else
                k -= 4;
        } else
            k += 4;

        --N;
    }

    printf("%d\n", count);

    return 0;
}
