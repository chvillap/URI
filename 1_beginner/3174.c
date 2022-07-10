// https://www.beecrowd.com.br/judge/en/problems/view/3174

#include <stdio.h>

int main() {
    char E[30], G[30];
    int N, H, P;
    int a = 0, b = 0, d = 0, m = 0;

    scanf("%d", &N);

    while (N) {
        scanf("%s%s%d", E, G, &H);

        switch(G[0]) {
            case 'a': a += H; break;
            case 'b': b += H; break;
            case 'd': d += H; break;
            case 'm': m += H;
        }

        --N;
    }

    P = a/4 + b/8 + d/12 + m/6;
    printf("%d\n", P);

    return 0;
}
