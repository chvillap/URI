// https://www.urionlinejudge.com.br/judge/en/problems/view/1914

#include <stdio.h>

int main()
{
    int QT;
    long M, N;
    char player1[50], choice1[10];
    char player2[50], choice2[10];
    int odd;

    scanf("%d", &QT);

    while (QT) {
        scanf("%s%s%s%s%ld%ld", player1, choice1, player2, choice2, &M, &N);

        odd = (M + N) % 2;

        if (odd) {
            if (choice1[0] == 'I')
                puts(player1);
            else
                puts(player2);
        } else {
            if (choice1[0] == 'P')
                puts(player1);
            else
                puts(player2);
        }
        --QT;
    }

    return 0;
}