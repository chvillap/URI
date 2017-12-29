// https://www.urionlinejudge.com.br/judge/en/problems/view/1607

#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while (T) {
        char s1[10001], *p1;
        char s2[10001], *p2;
        int operations = 0;

        scanf("%s%s", s1, s2);

        for (p1 = s1, p2 = s2; *p1 != '\0'; ++p1, ++p2) {
            if (*p2 >= *p1)
                operations += *p2 - *p1;
            else
                operations += ('z' - *p1) + (*p2 - 'a') + 1;
        }

        printf("%d\n", operations);

        --T;
    }

    return 0;
}
