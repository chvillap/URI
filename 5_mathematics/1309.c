// https://www.urionlinejudge.com.br/judge/en/problems/view/1309

#include <stdio.h>

int main()
{
    unsigned long dollars;
    unsigned int cents, i;
    char money[20];

    while (scanf("%lu%u", &dollars, &cents) != EOF) {
        sprintf(money + 16, "%02u", cents);
        money[15] = '.';
        sprintf(money + 12, "%03lu%s", dollars % 1000, money + 15);
        dollars /= 1000;
        money[11] = ',';
        sprintf(money + 8, "%03lu%s", dollars % 1000, money + 11);
        dollars /= 1000;
        money[7] = ',';
        sprintf(money + 4, "%03lu%s", dollars % 1000, money + 7);
        dollars /= 1000;
        money[3] = ',';
        sprintf(money, "%03lu%s", dollars % 1000, money + 3);

        i = 0;
        while (money[i] != '.' && (money[i] == '0' || money[i] == ','))
            ++i;

        if (money[i] == '.')
            printf("$%s\n", money + i - 1);
        else
            printf("$%s\n", money + i);
    }

    return 0;
}
