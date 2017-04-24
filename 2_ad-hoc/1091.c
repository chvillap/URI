// https://www.urionlinejudge.com.br/judge/en/problems/view/1091

#include <stdio.h>

int main()
{
    int K, N, M, X, Y;
    int i, dX, dY;

    while (1) {
        scanf("%d", &K);
        if (!K)
            break;

        scanf("%d %d", &N, &M);

        for (i = 0; i < K; ++i) {
            scanf("%d %d", &X, &Y);
            dX = X - N;
            dY = Y - M;

            if (!dX || !dY)
                puts("divisa");
            else if (dX < 0 && dY > 0)
                puts("NO");
            else if (dX > 0 && dY > 0)
                puts("NE");
            else if (dX < 0 && dY < 0)
                puts("SO");
            else if (dX > 0 && dY < 0)
                puts("SE");
        }
    }

    return 0;
}
