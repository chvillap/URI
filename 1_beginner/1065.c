// https://www.urionlinejudge.com.br/judge/en/problems/view/1065

#include <stdio.h>

int main()
{
    int i, num, evens = 0;

    for (i = 0; i < 5; ++i) {
        scanf("%d", &num);

        if (!(num % 2))
            ++evens;
    }

    printf("%d valores pares\n", evens);

    return 0;
}
