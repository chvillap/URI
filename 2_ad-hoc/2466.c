// https://www.beecrowd.com.br/judge/en/problems/view/2466

#include <stdio.h>
#include <string.h>

int main() {
    int N, i, cur_balls[64], next_balls[64];

    scanf("%d", &N);
    for (i = 0; i < N; ++i)
        scanf("%d", &cur_balls[i]);

    while (N) {
        for (i = 0; i < N - 1; ++i) {
            if (cur_balls[i] == cur_balls[i + 1])
                next_balls[i] = 1;
            else
                next_balls[i] = -1;
        }
        memcpy(cur_balls, next_balls, sizeof(next_balls));
        --N;
    }

    if (cur_balls[0] == 1)
        puts("preta");
    else
        puts("branca");

    return 0;
}
