// https://www.urionlinejudge.com.br/judge/en/problems/view/2140

#include <stdio.h>

int main()
{
    int price, paid;
    int bills[] = {100, 50, 20, 10, 5, 2};

    while (1) {
        int change, billsUsed = 0;

        scanf("%d %d", &price, &paid);
        if (!price && !paid)
            break;

        change = paid - price;

        if (change >= 4 && change <= 150) {
            int i = 0;

            while (change > 0 && billsUsed < 2) {
                while (change >= bills[i]) {
                    change %= bills[i];
                    ++billsUsed;
                }
                ++i;
            }
        }

        if (billsUsed < 2 || change > 0)
            puts("impossible");
        else
            puts("possible");
    }

    return 0;
}
