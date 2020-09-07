// https://www.urionlinejudge.com.br/judge/en/problems/view/1323

#include <stdio.h>

int main()
{
    int N;
    int total;

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        total = 0;
        while (N) {
            total += N * N;
            --N;
        }

        printf("%d\n", total);
    }

    return 0;
}
