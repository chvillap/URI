// https://www.urionlinejudge.com.br/judge/en/problems/view/1134

#include <stdio.h>

int main()
{
    int fuel;
    int counts[3] = {0, 0, 0};

    while (1) {
        scanf("%d", &fuel);

        if (fuel == 4)
            break;
        ++counts[fuel - 1];
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",
        counts[0], counts[1], counts[2]);

    return 0;
}
