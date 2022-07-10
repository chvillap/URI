// https://www.beecrowd.com.br/judge/en/problems/view/3145

#include <stdio.h>

int main() {
    int N, X;

    scanf("%d%d", &N, &X);

    printf("%.2f\n", X / (N + 2.0f));

    return 0;
}
