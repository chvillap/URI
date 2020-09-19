// https://www.urionlinejudge.com.br/judge/en/problems/view/1247

#include <stdio.h>
#include <math.h>

int main()
{
    int D, VF, VG;
    double X;

    while (scanf("%d%d%d", &D, &VF, &VG) != EOF) {
        X = sqrt(D*D + 144);

        if (X / VG <= 12.0 / VF)
            puts("S");
        else
            puts("N");
    }

    return 0;
}
