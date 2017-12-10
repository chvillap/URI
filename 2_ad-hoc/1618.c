// https://www.urionlinejudge.com.br/judge/en/problems/view/1618

#include <stdio.h>

int main()
{
    int N, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;
    int withinArea;

    scanf("%d", &N);

    while (N > 0) {
        scanf("%d%d%d%d%d%d%d%d%d%d",
            &Ax, &Ay, &Bx, &By, &Cx, &Cy, &Dx, &Dy, &Rx, &Ry);

        withinArea = (Rx >= Ax && Rx <= Bx && Ry >= Ay && Ry <= Dy);
        printf("%d\n", withinArea);

        --N;
    }

    return 0;
}
