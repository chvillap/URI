// https://www.urionlinejudge.com.br/judge/en/problems/view/1013

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a, b;

    scanf("%ld", &a);
    scanf("%ld", &b);

    a = (a + b + abs(a - b)) / 2;

    scanf("%ld", &b);

    printf("%ld eh o maior\n", (a + b + abs(a - b)) / 2);

    return 0;
}
