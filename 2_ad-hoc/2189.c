// https://www.beecrowd.com.br/judge/en/problems/view/2189

#include <stdio.h>

int main() {
    int T, N, x, i;

    T = 1;
    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        printf("Teste %d\n", T++);

        for (i = 1; N > 0; ++i, --N) {
            scanf("%d", &x);
            if (x == i)
                printf("%d\n\n", x);
        }
    }

    return 0;
}
