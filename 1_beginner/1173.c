// https://www.urionlinejudge.com.br/judge/en/problems/view/1173

#include <stdio.h>

int main()
{
    int i, V, N[10];

    scanf("%d", &V);

    N[0] = V;
    printf("N[0] = %d\n", V);

    for (i = 1; i < 10; ++i) {
        N[i] = 2 * N[i - 1];
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
