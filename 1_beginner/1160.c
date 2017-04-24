// https://www.urionlinejudge.com.br/judge/en/problems/view/1160

#include <stdio.h>
#include <math.h>

int main()
{
    int T, i;

    scanf("%d", &T);

    for (i = 0; i < T; ++i) {
        int pA, pB, years = 0;
        double g1, g2;

        scanf("%d %d", &pA, &pB);

        scanf("%lf %lf", &g1, &g2);
        g1 /= 100.0;
        g2 /= 100.0;

        // If it wasn't for that constraint that says that populations can
        // never be non-integers, the result would be:
        //
        // years = ceil(log(pB / pA) / log((1.0 + g1) / (1.0 + g2)));

        while (pA <= pB && years <= 100) {
            pA += pA * g1;
            pB += pB * g2;
            ++years;
        }

        if (years > 100)
            puts("Mais de 1 seculo.");
        else
            printf("%d anos.\n", years);
    }

    return 0;
}
