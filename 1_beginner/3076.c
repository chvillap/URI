// https://www.beecrowd.com.br/judge/en/problems/view/3076

#include <stdio.h>

int main() {
    int N, century;

    while (scanf("%d", &N) != EOF) {
        century = N / 100 + (N % 100 != 0);
        printf("%d\n", century);
    }

    return 0;
}
