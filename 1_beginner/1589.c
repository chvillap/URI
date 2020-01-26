// https://www.urionlinejudge.com.br/judge/en/problems/view/1589

#include <stdio.h>

int main()
{
    int T, R1, R2;

    scanf("%d", &T);

    while (T) {
        scanf("%d%d", &R1, &R2);
        printf("%d\n", (2*R1 + 2*R2) / 2);
        --T;
    }

    return 0;
}