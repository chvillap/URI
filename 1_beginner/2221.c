// https://www.urionlinejudge.com.br/judge/en/problems/view/2221

#include <stdio.h>

int main()
{
    int T, B;
    int A1, A2, D1, D2, L1, L2;
    float value1, value2;

    scanf("%d", &T);

    while (T) {
        scanf("%d%d%d%d%d%d%d", &B, &A1, &D1, &L1, &A2, &D2, &L2);

        value1 = (A1 + D1) / 2.0 + (!(L1 % 2)) * B;
        value2 = (A2 + D2) / 2.0 + (!(L2 % 2)) * B;

        if (value1 > value2)
            puts("Dabriel");
        else if (value1 < value2)
            puts("Guarte");
        else
            puts("Empate");

        --T;
    }

    return 0;
}