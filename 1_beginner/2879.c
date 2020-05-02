// https://www.urionlinejudge.com.br/judge/en/problems/view/2879

#include <stdio.h>

int main()
{
    int N, car, wins = 0;

    scanf("%d", &N);

    while (N) {
        scanf("%d", &car);

        if (car != 1)
            ++wins;

        --N;
    }

    printf("%d\n", wins);

    return 0;
}