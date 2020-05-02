// https://www.urionlinejudge.com.br/judge/en/problems/view/2782

#include <stdio.h>

int main()
{
    int N, X[1000];
    int i, j;
    int diff, stepladders = 0;

    scanf("%d", &N);
    for (i = 0; i < N; ++i)
        scanf("%d", &X[i]);

    if (N <= 2)
        stepladders = 1;
    else {
        i = j = 0;
        while (i < N - 1) {
            diff = X[i + 1] - X[i];
            while (X[j + 1] - X[j] == diff)
                ++j;
            i = j;
            ++stepladders;
        }
    }

    printf("%d\n", stepladders);

    return 0;
}
