// https://www.beecrowd.com.br/judge/en/problems/view/2423

#include <stdio.h>
#define min(x, y) ((x) < (y) ? (x) : (y))

int main() {
    int A, B, C, amount;

    scanf("%d%d%d", &A, &B, &C);
    amount = min(min(A / 2, B / 3), C / 5);
    printf("%d\n", amount);

    return 0;
}
