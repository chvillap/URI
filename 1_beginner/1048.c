// https://www.urionlinejudge.com.br/judge/en/problems/view/1048

#include <stdio.h>

int main()
{
    double salary, newSalary;
    int increase;

    scanf("%lf", &salary);

    if (salary >= 0.0 && salary <= 400.0) {
        increase = 15;
        newSalary = 1.15 * salary;
    } else if (salary >= 400.01 && salary <= 800.0) {
        increase = 12;
        newSalary = 1.12 * salary;
    } else if (salary >= 800.01 && salary <= 1200.0) {
        increase = 10;
        newSalary = 1.10 * salary;
    } else if (salary >= 1200.01 && salary <= 2000.0) {
        increase = 7;
        newSalary = 1.07 * salary;
    } else if (salary > 2000.0) {
        increase = 4;
        newSalary = 1.04 * salary;
    }

    printf("Novo salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", newSalary - salary);
    printf("Em percentual: %d %%\n", increase);

    return 0;
}
