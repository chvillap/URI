// https://www.urionlinejudge.com.br/judge/en/problems/view/3047

#include <stdio.h>

int main()
{
    int M, A, B;
    int C;

    scanf("%d%d%d", &M, &A, &B);
    C = M - A - B;

    if (A >= B && A >= C)
        printf("%d\n", A);
    else if (B >= A && B >= C)
        printf("%d\n", B);
    else
        printf("%d\n", C);

    return 0;
}
