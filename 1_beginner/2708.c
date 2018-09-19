// https://www.urionlinejudge.com.br/judge/en/problems/view/2708

#include <stdio.h>

int main()
{
    char move[7];
    int T, jeeps = 0, tourists = 0;

    while (1) {
        scanf("%s", move);
        if (move[0] == 'A')
            break;

        scanf("%d", &T);

        if (move[0] == 'S') {
            ++jeeps;
            tourists += T;
        } else {
            --jeeps;
            tourists -= T;
        }
    }

    printf("%d\n%d\n", tourists, jeeps);

    return 0;
}
