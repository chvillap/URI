// https://www.beecrowd.com.br/judge/en/problems/view/2395

#include <stdio.h>

int main() {
    int A, B, C, X, Y, Z;
    int n1, n2, n3;

    scanf("%d%d%d%d%d%d", &A, &B, &C, &X, &Y, &Z);

    n1 = X / A;
    n2 = Y / B;
    n3 = Z / C;

    printf("%d\n", n1 * n2 * n3);

    return 0;
}
