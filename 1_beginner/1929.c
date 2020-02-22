// https://www.urionlinejudge.com.br/judge/en/problems/view/1929

#include <stdio.h>

int main()
{
    int A[4];
    int i, j, tmp;

    scanf("%d%d%d%d", &A[0], &A[1], &A[2], &A[3]);

    for (i = 1; i < 4; ++i) {
        tmp = A[i];
        j = i - 1;
        while (j >= 0 && tmp < A[j]) {
            A[j + 1] = A[j];
            --j;
        }
        A[j + 1] = tmp;
    }

    if ((A[0] + A[1] > A[2]) || (A[0] + A[1] > A[3]) || (A[1] + A[2] > A[3]))
        puts("S");
    else
        puts("N");

    return 0;
}
