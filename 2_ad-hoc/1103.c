// https://www.urionlinejudge.com.br/judge/en/problems/view/1103

#include <stdio.h>

int main()
{
    while (1) {
        int h1, m1, h2, m2;
        int minutes;

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        if (!h1 && !m1 && !h2 && !m2)
            break;

        if (h1 > h2 || h1 == h2 && m1 > m2)
            h2 += 24;

        minutes = (h2*60 + m2) - (h1*60 + m1);

        printf("%d\n", minutes);
    }

    return 0;
}
