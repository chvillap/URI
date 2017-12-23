// https://www.urionlinejudge.com.br/judge/en/problems/view/1397

#include <stdio.h>

int main()
{
    while (1) {
        int N, A, B;
        int score[2] = {0, 0};

        scanf("%d", &N);
        if (!N)
            break;

        while (N > 0) {
            scanf("%d%d", &A, &B);

            if (A != B)
                ++score[A < B];

            --N;
        }

        printf("%d %d\n", score[0], score[1]);
    }

    return 0;
}
