// https://www.urionlinejudge.com.br/judge/en/problems/view/2757

#include <stdio.h>

int main()
{
    int A, B, C;

    while (scanf("%d%d%d", &A, &B, &C) != EOF) {
        printf("A = %d, B = %d, C = %d\n"
               "A = %10d, B = %10d, C = %10d\n"
               "A = %010d, B = %010d, C = %010d\n"
               "A = %-10d, B = %-10d, C = %-10d\n",
               A, B, C, A, B, C, A, B, C, A, B, C);
    }

    return 0;
}
