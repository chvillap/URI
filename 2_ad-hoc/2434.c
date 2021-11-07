// https://www.beecrowd.com.br/judge/en/problems/view/2434

#include <stdio.h>

int main() {
    int N, S, X, min = 31001;

    scanf("%d%d", &N, &S);

    while (N) {
        scanf("%d", &X);
        S += X;
        if (S < min)
            min = S;
        --N;
    }

    printf("%d\n", min);
}
