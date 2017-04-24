// https://www.urionlinejudge.com.br/judge/en/problems/view/2310

#include <stdio.h>

int main()
{
    int N;
    int S = 0, S1 = 0, B = 0, B1 = 0, A = 0, A1 = 0;
    int i;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        char name[50];
        int s, s1, b, b1, a, a1;

        scanf("%s", name);
        scanf("%d %d %d", &s, &b, &a);
        scanf("%d %d %d", &s1, &b1, &a1);

        S += s;
        B += b;
        A += a;
        S1 += s1;
        B1 += b1;
        A1 += a1;
    }

    printf("Pontos de Saque: %.2f %%.\n", (double) S1 / S * 100);
    printf("Pontos de Bloqueio: %.2f %%.\n", (double) B1 / B * 100);
    printf("Pontos de Ataque: %.2f %%.\n", (double) A1 / A * 100);

    return 0;
}
