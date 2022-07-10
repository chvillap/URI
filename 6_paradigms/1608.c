// https://www.beecrowd.com.br/judge/en/problems/view/1608

#include <stdio.h>

int main() {
    int T, D, I, B;
    int Qi, Ii, Ia;
    int i, j;
    int Icost[100], Bcost[100];
    int cakes, max_cakes;

    scanf("%d", &T);

    while (T) {
        max_cakes = 0;
        scanf("%d%d%d", &D, &I, &B);

        for (i = 0; i < I; ++i)
            scanf("%d", &Icost[i]);

        for (i = 0; i < B; ++i) {
            scanf("%d", &Qi);
            Bcost[i] = 0;

            for (j = 0; j < Qi; ++j) {
                scanf("%d%d", &Ii, &Ia);
                Bcost[i] += Icost[Ii] * Ia;
            }

            cakes = D / Bcost[i];
            if (cakes > max_cakes)
                max_cakes = cakes;
        }

        printf("%d\n", max_cakes);
        --T;
    }

    return 0;
}