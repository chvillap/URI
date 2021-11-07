// https://www.beecrowd.com.br/judge/en/problems/view/2420

#include <stdio.h>

int main() {
    int N, a;
    int i, cumsum[100000];

    scanf("%d%d", &N, &a);

    cumsum[0] = a;
    for (i = 1; i < N; ++i) {
        scanf("%d", &a);
        cumsum[i] = cumsum[i - 1] + a;
    }

    for (i = 0; i < N; ++i) {
        if (cumsum[i] == cumsum[N - 1] - cumsum[i]) {
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}
