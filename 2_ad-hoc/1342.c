// https://www.urionlinejudge.com.br/judge/en/problems/view/1342

#include <stdio.h>
#include <string.h>

int main()
{
    while (1) {
        int P, S;
        int T1, T2, T3;
        int N, D1, D2;
        int player[10], locked[10];
        int i, j;

        scanf("%d%d", &P, &S);
        if (!(P || S))
            break;

        scanf("%d%d%d", &T1, &T2, &T3);
        scanf("%d", &N);

        memset(player, 0, P * sizeof(int));
        memset(locked, 0, P * sizeof(int));

        for (i = 0, j = 0; i < N; ++i) {
            scanf("%d%d", &D1, &D2);

            while (locked[j]) {
                --locked[j];
                j = (j + 1) % P;
            }

            player[j] += D1 + D2;

            if (player[j] == T1 || player[j] == T2 || player[j] == T3)
                locked[j] = 1;

            if (player[j] <= S)
                j = (j + 1) % P;
        }

        printf("%d\n", j + 1);
    }

    return 0;
}
