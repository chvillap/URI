// https://www.urionlinejudge.com.br/judge/en/problems/view/2951

#include <stdio.h>

int main()
{
    int N, G, V, X;
    char R;
    int i, runes[26], friendship = 0;

    scanf("%d%d\n", &N, &G);

    for (i = 0; i < N; ++i) {
        scanf("%c %d\n", &R, &V);

        runes[R - 'A'] = V;
    }

    scanf("%d\n", &X);

    for (i = 0; i < X; ++i) {
        scanf("%c ", &R);
        friendship += runes[R - 'A'];
    }

    if (friendship >= G)
       printf("%d\nYou shall pass!\n", friendship);
   else
       printf("%d\nMy precioooous\n", friendship);

    return 0;
}