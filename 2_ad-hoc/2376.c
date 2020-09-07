// https://www.urionlinejudge.com.br/judge/en/problems/view/2376

#include <stdio.h>
#include <string.h>

int main()
{
    int M, N;
    int i, nw, nt = 16;
    char teams[16], winners[16];

    for (i = 0; i < nt; ++i)
        teams[i] = 'A' + i;

    while (nt > 1) {
        for (i = 0, nw = 0; i < nt / 2; ++i) {
            scanf("%d%d", &M, &N);

            if (M > N)
                winners[nw++] = teams[2*i];
            else
                winners[nw++] = teams[2*i + 1];
        }
        memcpy(teams, winners, nw * sizeof(char));
        nt = nw;
    }

    printf("%c\n", teams[0]);

    return 0;
}
