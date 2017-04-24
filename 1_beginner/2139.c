// https://www.urionlinejudge.com.br/judge/en/problems/view/2139

#include <stdio.h>

int main()
{
    int month, day;
    int daysInMonth[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (scanf("%d %d", &month, &day) != EOF) {
        int i, daysLeft = 0;

        for (i = 10; i >= month; --i)
            daysLeft += daysInMonth[i];

        if (month == 12)
            daysLeft += 25 - day;
        else
            daysLeft += 25 + daysInMonth[month-1] - day;

        if (daysLeft < 0)
            puts("Ja passou!");
        else if (!daysLeft)
            puts("E natal!");
        else if (daysLeft == 1)
            puts("E vespera de natal!");
        else
            printf("Faltam %d dias para o natal!\n", daysLeft);
    }

    return 0;
}
