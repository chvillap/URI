// https://www.urionlinejudge.com.br/judge/en/problems/view/1429

#include <stdio.h>
#include <string.h>

int main()
{
    char acm[6];
    int i, n, dec;
    int fat[6] = {1, 1, 2, 6, 24, 120};

    while (1) {
        scanf("%s", acm);
        if (*acm == '0')
            break;

        dec = 0;
        n = strlen(acm);
        for (i = 0; i < n; ++i)
            dec += (acm[i] - '0') * fat[n - i];

        printf("%d\n", dec);
    }

    return 0;
}
