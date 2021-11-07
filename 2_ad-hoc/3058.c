// https://www.beecrowd.com.br/judge/en/problems/view/3058

#include <stdio.h>

int main() {
    int N, G;
    float P, P1g, min_P1g = 1001.0f;

    scanf("%d", &N);

    while (N) {
        scanf("%f%d", &P, &G);

        P1g = P / G;
        if (P1g < min_P1g)
            min_P1g = P1g;

        --N;
    }

    printf("%.2f\n", min_P1g * 1000);

    return 0;
}
