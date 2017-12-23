// https://www.urionlinejudge.com.br/judge/en/problems/view/1769

#include <stdio.h>

#define dig(c) ((c) - '0')

int main()
{
    char cpf[15];
    int i, sum1, sum2, b1, b2;

    while (scanf("%s", cpf) != EOF) {
        sum1 = dig(cpf[0]) +
               dig(cpf[1]) * 2 +
               dig(cpf[2]) * 3 +
               dig(cpf[4]) * 4 +
               dig(cpf[5]) * 5 +
               dig(cpf[6]) * 6 +
               dig(cpf[8]) * 7 +
               dig(cpf[9]) * 8 +
               dig(cpf[10]) * 9;
        b1 = sum1 % 11;
        if (b1 == 10)
            b1 = 0;

        sum2 = dig(cpf[0]) * 9 +
               dig(cpf[1]) * 8 +
               dig(cpf[2]) * 7 +
               dig(cpf[4]) * 6 +
               dig(cpf[5]) * 5 +
               dig(cpf[6]) * 4 +
               dig(cpf[8]) * 3 +
               dig(cpf[9]) * 2 +
               dig(cpf[10]);
        b2 = sum2 % 11;
        if (b2 == 10)
            b2 = 0;

        if (dig(cpf[12]) == b1 && dig(cpf[13]) == b2)
            puts("CPF valido");
        else
            puts("CPF invalido");
    }

    return 0;
}
