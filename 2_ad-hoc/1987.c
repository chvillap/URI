// https://www.urionlinejudge.com.br/judge/en/problems/view/1987

#include <stdio.h>

int main()
{
    int n, sum;
    char m[11], *p;

    while (scanf("%d %s", &n, m) != EOF) {
        sum = 0;
        for (p = m; *p != '\0'; ++p)
            sum += (int)*p - (int)'0';

        if (sum % 3)
            printf("%d nao\n", sum);
        else
            printf("%d sim\n", sum);
    }

    return 0;
}
