// https://www.urionlinejudge.com.br/judge/en/problems/view/1037

#include <stdio.h>

int main()
{
    double number;

    scanf("%lf", &number);

    if (number < 0.0)
        puts("Fora de intervalo");
    else if (number <= 25.0)
        puts("Intervalo [0,25]");
    else if (number <= 50.0)
        puts("Intervalo (25,50]");
    else if (number <= 75.0)
        puts("Intervalo (50,75]");
    else if (number <= 100.0)
        puts("Intervalo (75,100]");
    else
        puts("Fora de intervalo");

    return 0;
}
