// https://www.urionlinejudge.com.br/judge/en/problems/view/2386

#include <stdio.h>

int main()
{
    int A, N, F;
    int stars = 0;

    scanf("%d%d", &A, &N);

    while (N) {
        scanf("%d", &F);

        if (A * F >= 40000000)
            ++stars;

        --N;
    }

    printf("%d\n", stars);

    return 0;
}
