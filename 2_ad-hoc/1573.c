// https://www.urionlinejudge.com.br/judge/en/problems/view/1573

#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;

    while (1) {
        scanf("%d%d%d", &A, &B, &C);
        if (!(A || B || C))
            break;

        printf("%d\n", (int) (pow((double) (A*B*C), 1./3)));
    }

    return 0;
}
