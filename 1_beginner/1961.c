// https://www.urionlinejudge.com.br/judge/en/problems/view/1961

#include <stdio.h>

int main()
{
    int P, N;
    int h[100], lose, i;

    scanf("%d%d", &P, &N);
    scanf("%d", &h[0]);

    for (i = 1, lose = 0; i < N; ++i) {
        scanf("%d", &h[i]);

        if (abs(h[i] - h[i - 1]) > P) {
            lose = 1;
            break;
        }
    }

    if (lose)
        puts("GAME OVER");
    else
        puts("YOU WIN");

    return 0;
}