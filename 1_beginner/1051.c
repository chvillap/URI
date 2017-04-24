// https://www.urionlinejudge.com.br/judge/en/problems/view/1051

#include <stdio.h>

int main()
{
    double salary;
    double tax = 0.0;

    scanf("%lf", &salary);

    if (salary > 4500.0) {
        tax += (salary - 4500.0) * 0.28;
        salary -= (salary - 4500.0);
    }
    if (salary >= 3000.01) {
        tax += (salary - 3000.0) * 0.18;
        salary -= (salary - 3000.0);
    }
    if (salary >= 2000.01) {
        tax += (salary - 2000.0) * 0.08;
        salary -= (salary - 2000.0);
    }

    if (!tax)
        puts("Isento");
    else
        printf("R$ %.2lf\n", tax);

    return 0;
}
