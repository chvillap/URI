// https://www.urionlinejudge.com.br/judge/en/problems/view/1115

#include <stdio.h>

int main()
{
    int X, Y;

    while (1) {
        scanf("%d%d", &X, &Y);
        if (!X || !Y)
            break;

        if (X > 0 && Y > 0)
            puts("primeiro");
        else if (X < 0 && Y > 0)
            puts("segundo");
        else if (X < 0 && Y < 0)
            puts("terceiro");
        else
            puts("quarto");
    }

    return 0;
}
