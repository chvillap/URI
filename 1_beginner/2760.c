// https://www.urionlinejudge.com.br/judge/en/problems/view/2760

#include <stdio.h>
#include <string.h>

int main()
{
    char A[102], B[102], C[102];
    int lenA, lenB, lenC;

    while (fgets(A, 101, stdin)) {
        lenA = strlen(A);

        fgets(B, 101, stdin);
        lenB = strlen(B);

        fgets(C, 101, stdin);
        lenC = strlen(C);

        A[lenA - 1] = B[lenB - 1] = C[lenC - 1] = '\0';
        printf("%s%s%s\n%s%s%s\n%s%s%s\n", A, B, C, B, C, A, C, A, B);

        A[10] = B[10] = C[10] = '\0';
        printf("%s%s%s\n", A, B, C);
    }

    return 0;
}
