// https://www.urionlinejudge.com.br/judge/en/problems/view/1120

#include <stdio.h>
#include <string.h>

int main()
{
    char N[102], output[102];
    char *pN, *pO;
    int i, D;

    while (1) {
        scanf("%d%s", &D, N);

        if (!D && !strcmp(N, "0"))
            break;

        for (pN = N, pO = output; *pN != '\0'; ++pN) {
            if (*pN != D + '0')
                *pO++ = *pN;
        }
        if (pO == output)
            *pO++ = '0';
        *pO = '\0';

        pO = output;
        while (*pO == '0' && *(pO + 1) != '\0')
            ++pO;

        puts(pO);
    }

    return 0;
}
