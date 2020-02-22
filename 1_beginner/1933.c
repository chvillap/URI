// https://www.urionlinejudge.com.br/judge/en/problems/view/1933

#include <stdio.h>

int main()
{
    int A, B;

    scanf("%d%d", &A, &B);
    printf("%d\n", A >= B ? A : B);

    return 0;
}
