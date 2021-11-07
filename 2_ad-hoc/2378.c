// https://www.beecrowd.com.br/judge/en/problems/view/2378

#include <stdio.h>

int main() {
    int N, C, S, E;
    int people = 0, exceeded = 0;

    scanf("%d%d", &N, &C);

    while (N) {
        scanf("%d%d", &S, &E);

        people = people - S + E;
        if (people > C)
            exceeded = 1;

        --N;
    }

    printf("%c\n", exceeded ? 'S' : 'N');

    return 0;
}
