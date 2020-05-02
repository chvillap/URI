// https://www.urionlinejudge.com.br/judge/en/problems/view/3040

#include <stdio.h>

int main()
{
    int N, h, d, g;

    scanf("%d", &N);

    while (N) {
        scanf("%d%d%d", &h, &d, &g);

        if (h >= 200 && h <= 300 && d >= 50 && g >= 150)
            puts("Sim");
        else
            puts("Nao");

        --N;
    }

    return 0;
}
