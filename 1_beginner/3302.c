// https://www.beecrowd.com.br/judge/en/problems/view/3302

#include <stdio.h>

int main() {
    int N, A, i = 1;

    scanf("%d", &N);
    while (N) {
        scanf("%d", &A);
        printf("resposta %d: %d\n", i, A);
        ++i;
        --N;
    }

    return 0;
}
