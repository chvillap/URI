// https://www.urionlinejudge.com.br/judge/en/problems/view/1329

#include <stdio.h>

int main()
{
    while (1) {
        int N, R;
        int i, john_wins = 0;

        scanf("%d", &N);
        if (!N)
            break;

        for (i = 0; i < N; ++i) {
            scanf("%d", &R);
            john_wins += R;
        }

        printf("Mary won %d times and John won %d times\n",
            N - john_wins, john_wins);
    }

    return 0;
}
