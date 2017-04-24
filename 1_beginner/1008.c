// https://www.urionlinejudge.com.br/judge/en/problems/view/1008

#include <stdio.h>

int main()
{
    int number, workedHours;
    double hourlyWage;

    scanf("%d", &number);
    scanf("%d", &workedHours);
    scanf("%lf", &hourlyWage);

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", workedHours * hourlyWage);

    return 0;
}
