// https://www.urionlinejudge.com.br/judge/en/problems/view/2437

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Xm, Ym, Xr, Yr;
    int distance;

    scanf("%d%d%d%d", &Xm, &Ym, &Xr, &Yr);

    distance = abs(Xr - Xm) + abs(Yr - Ym);

    printf("%d\n", distance);

    return 0;
}
