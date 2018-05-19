// https://www.urionlinejudge.com.br/judge/en/problems/view/1867

#include <stdio.h>
#include <string.h>

int sum_digits(char *str)
{
    char *ptr;
    int sum;

    for (ptr = str, sum = 0; *ptr != '\0'; ++ptr)
        sum += *ptr - '0';

    return sum;
}

int main()
{
    char N[102], M[102];
    int sumN, sumM;

    while (1) {
        scanf("%s%s", N, M);

        if (!strcmp(N, "0") && !strcmp(M, "0"))
            break;

        sumN = sum_digits(N);
        while (sumN > 9) {
            sprintf(N, "%d", sumN);
            sumN = sum_digits(N);
        }

        sumM = sum_digits(M);
        while (sumM > 9) {
            sprintf(M, "%d", sumM);
            sumM = sum_digits(M);
        }

        if (sumN > sumM)
            puts("1");
        else if (sumN < sumM)
            puts("2");
        else
            puts("0");
    }

    return 0;
}
