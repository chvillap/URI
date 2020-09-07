// https://www.urionlinejudge.com.br/judge/en/problems/view/2388

#include <stdio.h>

int main()
{
    int N, T, V;
    int distance = 0;

    scanf("%d", &N);

    while (N) {
        scanf("%d%d", &T, &V);

        distance += T * V;
        --N;
    }

    printf("%d\n", distance);

    return 0;
}
