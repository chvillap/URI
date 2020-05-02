// https://www.urionlinejudge.com.br/judge/en/problems/view/2850

#include <stdio.h>

int main()
{
    char input[10];

    while (1) {
        if (!fgets(input, 10, stdin))
            break;

        if (input[0] == 'e')
            puts("ingles");
        else if (input[0] == 'd')
            puts("frances");
        else if (input[0] == 'n')
            puts("portugues");
        else if (input[0] == 'a')
            puts("caiu");
    }

    return 0;
}