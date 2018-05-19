// https://www.urionlinejudge.com.br/judge/en/problems/view/1159

#include <stdio.h>

int main()
{
    int N, X;

    while (1) {
        scanf("%d", &X);
        if (!X)
            break;

        int i = !(X % 2) ? X : X + 1;
        int j, sum = 0;

        for (j = 0; j < 5; ++j) {
            sum += i;
            i += 2;
        }

        printf("%d\n", sum);

        --N;
    }

    return 0;
}
