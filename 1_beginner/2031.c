// https://www.urionlinejudge.com.br/judge/en/problems/view/2031

#include <stdio.h>

int main()
{
    int n;
    char p1[10], p2[10];

    scanf("%d", &n);

    while (n) {
        scanf("%s%s", p1, p2);

        if (p1[0] == 'a' && p2[0] == 'a')
            puts("Aniquilacao mutua");
        else if (p1[0] == 'a' && p2[0] != 'a')
            puts("Jogador 1 venceu");
        else if (p1[0] != 'a' && p2[0] =='a')
            puts("Jogador 2 venceu");
        else if (p1[1] == 'e' && p2[1] == 'a')
            puts("Jogador 1 venceu");
        else if (p1[1] == 'a' && p2[1] == 'e')
            puts("Jogador 2 venceu");
        else if (p1[1] == 'a' && p2[1] == 'a')
            puts("Ambos venceram");
        else if (p1[1] == 'e' && p2[1] == 'e')
            puts("Sem ganhador");

        --n;
    }

    return 0;
}