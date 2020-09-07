// https://www.urionlinejudge.com.br/judge/en/problems/view/3048

#include <stdio.h>

int main()
{
    int N, V;
    int prev, circles = 0;

    scanf("%d%d", &N, &prev);
    ++circles;
    --N;

    while (N) {
        scanf("%d", &V);

        if (V != prev)
            ++circles;

        prev = V;
        --N;
    }

    printf("%d\n", circles);

    return 0;
}
