// https://www.urionlinejudge.com.br/judge/en/problems/view/1174

#include <stdio.h>

int main()
{
    int i;
    float A;

    for (i = 0; i < 100; ++i) {
        scanf("%f", &A);

        if (A <= 10.0)
            printf("A[%d] = %.1f\n", i, A);
    }

    return 0;
}
