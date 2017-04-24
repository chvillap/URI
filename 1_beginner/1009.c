// https://www.urionlinejudge.com.br/judge/en/problems/view/1009

#include <stdio.h>

int main()
{
    char name[100];
    double salary, totalSales;

    fgets(name, 100, stdin);
    scanf("%lf", &salary);
    scanf("%lf", &totalSales);

    printf("TOTAL = R$ %.2lf\n", salary + 0.15 * totalSales);

    return 0;
}
