// https://www.beecrowd.com.br/judge/en/problems/view/3093

#include <stdio.h>

int main() {
    int N, bit[4];
    char S[1001], *p;

    scanf("%d", &N);

    while (N) {
        scanf("%s", S);
        bit[0] = bit[1] = bit[2] = bit[3] = 0;

        for (p = S; *p != '\0'; ++p) {
            switch (*p) {
                case 'A': bit[0] = 1; break;
                case 'Q': bit[1] = 1; break;
                case 'J': bit[2] = 1; break;
                case 'K': bit[3] = 1; break;
            }
        }

        if (bit[0] && bit[1] && bit[2] && bit[3])
            puts("Aaah muleke");
        else
            puts("Ooo raca viu");
        --N;
    }

    return 0;
}
