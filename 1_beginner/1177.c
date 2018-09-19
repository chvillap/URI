// https://www.urionlinejudge.com.br/judge/en/problems/view/1177

#include <stdio.h>

int main()
{
    int i, j, T, N[1000];

    scanf("%d", &T);

    for (i = 0, j = 0; i < 1000; ++i, j = (j + 1) % T) {
        N[i] = j;
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
