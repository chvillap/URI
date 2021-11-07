// https://www.beecrowd.com.br/judge/en/problems/view/3109

#include <stdio.h>

int main() {
    int N, Q, E, A, B;
    int i, aux, redirects, desks[1001];

    scanf("%d%d", &N, &Q);

    for (i = 1; i <= N; ++i)
        desks[i] = i;
    
    for (i = 0; i < Q; ++i) {
        scanf("%d", &E);
        if (E == 1) {
            scanf("%d%d", &A, &B);
            aux = desks[A];
            desks[A] = desks[B];
            desks[B] = aux;
        } else {
            scanf("%d", &A);
            redirects = 0;
            aux = A;
            while (desks[aux] != A) {
                aux = desks[aux];
                ++redirects;
            }
            printf("%d\n", redirects);
        }
    }

    return 0;
}
