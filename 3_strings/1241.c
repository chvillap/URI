// https://www.urionlinejudge.com.br/judge/en/problems/view/1241

#include <stdio.h>
#include <string.h>

int main()
{
    int N, i;
    char A[1001], B[1001];
    int lenA, lenB;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%s%s", A, B);

        lenA = strlen(A);
        lenB = strlen(B);

        if (lenA >= lenB && !strcmp(A + lenA - lenB, B)) {
            puts("encaixa");
        } else
            puts("nao encaixa");
    }

    return 0;
}
