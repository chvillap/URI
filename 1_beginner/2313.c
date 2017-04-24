// https://www.urionlinejudge.com.br/judge/en/problems/view/2313

#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main()
{
    long int a, b, c;
    long int x, y, z;

    scanf("%ld %ld %ld", &a, &b, &c);

    x = MAX(a, MAX(b, c));
    z = MIN(a, MIN(b, c));
    y = a + b + c - x - z;

    if (x >= y + z)
        puts("Invalido");
    else {
        if (x == y && y == z)
            puts("Valido-Equilatero");
        else if (x != y && y != z && x != z)
            puts("Valido-Escaleno");
        else
            puts("Valido-Isoceles");

        if (x*x == y*y + z*z)
            puts("Retangulo: S");
        else
            puts("Retangulo: N");
    }

    return 0;
}
