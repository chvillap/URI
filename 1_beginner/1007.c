// https://www.urionlinejudge.com.br/judge/en/problems/view/1007

#include <stdio.h>

int main()
{
    long int a, b, c, d;

    scanf("%ld", &a);
    scanf("%ld", &b);
    scanf("%ld", &c);
    scanf("%ld", &d);

    printf("DIFERENCA = %ld\n", a * b - c * d);

    return 0;
}
