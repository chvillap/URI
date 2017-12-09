// https://www.urionlinejudge.com.br/judge/en/problems/view/1142

#include <stdio.h>

int main()
{
    int N, i, j;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        for (j = 1; j <= 3; ++j) {
            printf("%d ", 4 * i + j);
        }
        puts("PUM");
    }

    return 0;
}
