// https://www.urionlinejudge.com.br/judge/en/problems/view/1020

#include <stdio.h>

int main()
{
    long int days;

    scanf("%ld", &days);

    printf("%ld ano(s)\n%ld mes(es)\n%ld dia(s)\n",
        days / 365, days % 365 / 30, days % 365 % 30);

    return 0;
}
