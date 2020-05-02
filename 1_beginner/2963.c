// https://www.urionlinejudge.com.br/judge/en/problems/view/2963

#include <stdio.h>

int main()
{
    int N, V;
    int Vcarlos, elected = 1;

    scanf("%d%d", &N, &Vcarlos);
    --N;

    while (N) {
        scanf("%d", &V);

        if (V > Vcarlos)
            elected = 0;

        --N;
    }

    if (elected)
        puts("S");
    else
        puts("N");

    return 0;
}