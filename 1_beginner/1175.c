// https://www.urionlinejudge.com.br/judge/en/problems/view/1175

#include <stdio.h>

int main()
{
    int i, N[20];

    for (i = 0; i < 20; ++i)
        scanf("%d", &N[i]);

    for (i = 0; i < 10; ++i) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    for (i = 0; i < 20; ++i)
        printf("N[%d] = %d\n", i, N[i]);

    return 0;
}
