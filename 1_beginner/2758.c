// https://www.urionlinejudge.com.br/judge/en/problems/view/2758

#include <stdio.h>
#include <math.h>

int main()
{
    float A, B;
    double C, D;

    while (scanf("%f%f%lf%lf", &A, &B, &C, &D) != EOF) {
        printf("A = %f, B = %f\n", A, B);
        printf("C = %lf, D = %lf\n", C, D);

        printf("A = %.1f, B = %.1f\n", A, B);
        printf("C = %.1lf, D = %.1lf\n", C, D);

        printf("A = %.2f, B = %.2f\n", A, B);
        printf("C = %.2lf, D = %.2lf\n", C, D);

        printf("A = %.3f, B = %.3f\n", A, B);
        printf("C = %.3lf, D = %.3lf\n", C, D);

        printf("A = %.3E, B = %.3E\n", A, B);
        printf("C = %.3lE, D = %.3lE\n", C, D);

        printf("A = %.0f, B = %.0f\n", A, B);
        printf("C = %.0f, D = %.0f\n", C, D);
    }

    return 0;
}
