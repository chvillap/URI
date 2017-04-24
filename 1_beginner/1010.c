// https://www.urionlinejudge.com.br/judge/en/problems/view/1010

#include <stdio.h>

int main()
{
    long int code1, code2;
    long int units1, units2;
    double price1, price2;

    scanf("%ld", &code1);
    scanf("%ld", &units1);
    scanf("%lf", &price1);

    scanf("%ld", &code2);
    scanf("%ld", &units2);
    scanf("%lf", &price2);

    printf("VALOR A PAGAR: R$ %.2lf\n",
        units1 * price1 + units2 * price2);

    return 0;
}
