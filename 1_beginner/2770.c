// https://www.urionlinejudge.com.br/judge/en/problems/view/2770

#include <stdio.h>

int main()
{
    int X, Y, M;
    int i, Cx, Cy;

    while (scanf("%d%d%d", &X, &Y, &M) != EOF) {
        if (X > Y) {
            X = X + Y;
            Y = X - Y;
            X = X - Y;
        }
        for (i = 0; i < M; ++i) {
            scanf("%d%d", &Cx, &Cy);
            if (Cx > Cy) {
                Cx = Cx + Cy;
                Cy = Cx - Cy;
                Cx = Cx - Cy;
            }
            if (Cx > X || Cy > Y)
                puts("Nao");
            else
                puts("Sim");
        }
    }

    return 0;
}
