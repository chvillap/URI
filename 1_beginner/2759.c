// https://www.urionlinejudge.com.br/judge/en/problems/view/2759

#include <stdio.h>

int main()
{
    char A, B, C;

    while (scanf("%c\n%c\n%c\n", &A, &B, &C) != EOF) {
        printf("A = %c, B = %c, C = %c\n"
               "A = %c, B = %c, C = %c\n"
               "A = %c, B = %c, C = %c\n",
               A, B, C, B, C, A, C, A, B);
    }

    return 0;
}
