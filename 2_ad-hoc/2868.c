// https://www.urionlinejudge.com.br/judge/en/problems/view/2868

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C, a, b, r, dist, i;
    char op;

    scanf("%d", &C);

    while (C) {
        scanf("%d %c %d = %d", &a, &op, &b, &r);

        switch (op) {
            case '+':
                dist = abs(r - (a + b));
                break;
            case '-':
                dist = abs(r - (a - b));
                break;
            case 'x':
                dist = abs(r - (a * b));
        }
        putchar('E');
        for (i = 0; i < dist; ++i)
            putchar('r');
        puts("ou!");

        --C;
    }

    return 0;
}
