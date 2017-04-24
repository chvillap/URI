// https://www.urionlinejudge.com.br/judge/en/problems/view/1105

#include <stdio.h>

int main()
{
    while (1) {
        int nBanks, nDebentures;
        int reserves[20], debtors[20], creditors[20], values[20];
        int i, bailout = 0;

        scanf("%d %d", &nBanks, &nDebentures);
        if (!nBanks && !nDebentures)
            break;

        for (i = 0; i < nBanks; ++i)
            scanf("%d", &reserves[i]);

        for (i = 0; i < nDebentures; ++i)
            scanf("%d %d %d", &debtors[i], &creditors[i], &values[i]);

        for (i = 0; i < nDebentures; ++i) {
            reserves[debtors[i] - 1] -= values[i];
            reserves[creditors[i] - 1] += values[i];
        }

        for (i = 0; i < nBanks && !bailout; ++i)
            if (reserves[i] < 0)
                bailout = 1;

        if (bailout)
            puts("N");
        else
            puts("S");
    }

    return 0;
}
