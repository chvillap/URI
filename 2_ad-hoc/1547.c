// https://www.urionlinejudge.com.br/judge/en/problems/view/1547

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, QT, S;
    int i, guess[10], diff, closest, winner;

    scanf("%d", &N);

    while (N) {
        scanf("%d%d", &QT, &S);
        
        winner = 0;
        closest = 999999;

        for (i = 0; i < QT; ++i) {
            scanf("%d", &guess[i]);

            diff = abs(S - guess[i]);
            
            if (diff < closest) {
                closest = diff;
                winner = i + 1;
            }
        }
        
        printf("%d\n", winner);

        --N;
    }

    return 0;
}
