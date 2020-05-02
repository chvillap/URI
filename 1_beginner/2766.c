// https://www.urionlinejudge.com.br/judge/en/problems/view/2766

#include <stdio.h>

int main()
{
    char name[31];
    int i;

    for (i = 1; i <= 10; ++i) {
        scanf("%s", name);

        if (i == 3 || i == 7 || i == 9)
            puts(name);
    }

    return 0;
}
