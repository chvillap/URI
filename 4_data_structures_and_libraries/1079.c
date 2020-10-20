// https://www.urionlinejudge.com.br/judge/en/problems/view/1709

#include <stdio.h>

int main()
{
    int P;
    int i, a1, half, count;
    int moves[200001];

    while (scanf("%d", &P) != EOF) {
        half = P / 2;

        for (i = 1; i <= half; ++i) {
            moves[i] = i * 2;
            moves[half + i] = i * 2 - 1;
        }

        a1 = 1;
        count = 0;
        do {
            a1 = moves[a1];
            ++count;
        } while (a1 != 1);

        printf("%d\n", count);
    }

    return 0;
}
