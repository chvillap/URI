// https://www.urionlinejudge.com.br/judge/en/problems/view/1158

#include <stdio.h>

int main()
{
    int N, X, Y;

    scanf("%d", &N);

    while (N > 0) {
        scanf("%d%d", &X, &Y);

        int i = (X % 2) ? X : X + 1;
        int sum = 0;

        while (Y > 0) {
            sum += i;
            i += 2;
            --Y;
        }

        printf("%d\n", sum);

        --N;
    }

    return 0;
}
