// https://www.urionlinejudge.com.br/judge/en/problems/view/1036

#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;
    double delta, R1, R2;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = B * B - 4 * A * C;

    if (!A || delta < 0)
        puts("Impossivel calcular");
    else {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);

        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }

    return 0;
}
